#include <algorithm> // copy
#include <iostream> // cin, cout
#include <iterator> // back_inserter, istream_iterator
#include <sstream> // istringstream
#include <string> // getline, stoi, string
#include <utility> // move
#include <vector> // vector

template <typename T>
struct Node {
    T val;
    std::vector<Node<T>> children;

    explicit Node(T val, std::vector<Node<T>> children = {})
        : val{val}, children{children} {}
};

int highest_tenure(Node<int> president) {
    // WRITE YOUR BRILLIANT CODE HERE
    return 0;
}

template<typename T, typename Iter, typename F>
Node<T> build_tree(Iter& it, F f) {
    std::string val = *it;
    ++it;
    int num = std::stoi(*it);
    ++it;
    std::vector<Node<T>> children;
    for (int i = 0; i < num; i++)
        children.emplace_back(build_tree<T>(it, f));
    return Node<T>{f(val), std::move(children)};
}

template<typename T>
std::vector<T> get_words() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream ss{line};
    std::vector<T> v;
    std::copy(std::istream_iterator<T>{ss}, std::istream_iterator<T>{}, std::back_inserter(v));
    return v;
}

int main() {
    std::vector<std::string> president_vec = get_words<std::string>();
    auto president_it = president_vec.begin();
    Node<int> president = build_tree<int>(president_it, [](auto s) { return std::stoi(s); });
    int res = highest_tenure(president);
    std::cout << res << '\n';
}
