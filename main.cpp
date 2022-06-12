#include <iostream>

using namespace std;

void passByVal(int val);
void passByRef(int& ref);
void passByPtr(int* ptr);




int main() {

	int x = 5;
	int y = 6;
	int z = 7;

	cout << "x, y, z" << endl;
	cout << x << " " << y << " " << z << endl;

	cout << "Let's Begin";
	
	passByVal(x);
	
	passByRef(y);
	
	int* zptr = &z;
	passByPtr(zptr);
	cout << "x, y, z" << endl;
	cout << x << " " << y <<" " << z << endl;
		

	return 0;
}

