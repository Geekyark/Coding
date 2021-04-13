#include <iostream>
using namespace std;
int indexofSmallestElement(double array[], int size);
int main(){
	cout << "Enter 10 Integers" << endl;
  for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
  }
	indexofSmallestElement(numbers, size);
  return 0;
}
int indexofSmallestElement(double array[], int size)
{
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (array[i] < array[index])
			index = i;
	}
	cout << endl << "Index of Smallest Element in Array is " << index << endl;
	return index;
}
