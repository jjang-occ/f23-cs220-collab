#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World!!" << endl;

	int num = 10;
	for (int i = 0; i < 3; ++i)
	{
		num *= 2;
	}

	cout << "Your favorite number is " << num << endl;
	return 0;
}