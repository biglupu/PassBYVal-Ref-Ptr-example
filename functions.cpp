#include <iostream>
using namespace std;



void passByRef(int& ref)
{
	cout << endl;
	ref = 10;
	cout << "ref";
	cout << endl << ref << endl;
}

void passByPtr(int* ptr)
{
	cout << endl;
	*ptr = 10;
	cout << "ptr = ";
	cout << ptr;
	cout << endl;
	cout << "*ptr = ";
	cout << *ptr << endl;
}

void passByVal(int val)
{
	cout << endl;
	val = 10;
	cout << "val";
	cout << endl << val << endl;
}