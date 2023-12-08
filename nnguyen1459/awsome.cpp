#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World!" << endl;
	int x = 5;
	int* y = &x;
	cout << *y << endl; // print 5
	return 0;
}