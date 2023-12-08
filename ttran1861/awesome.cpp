#include <iostream>
using namespace std;

int main()
{
	cout << "This is awesome!" << endl;
	int x = 5;
	int* y = &x;
	cout << *y << endl; //prints 5
	return 0;
}