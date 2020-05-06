#include <iostream>
using namespace std;

class X
{
public: X()
        { cout<<"X"; }
        ~X()
        { cout<<"~X"; }
};

class Y : public X
{
public: Y()
        { cout<<"Y"; }
        ~Y()
        { cout<<"~Y"; }
};

int main()
{
    Y obj;
    return 0;
}
