#include <iostream>
using namespace std;

void Check1 (int n)
{
	n++;
	cout << &n << endl;
}

void Check2 (int &n)
{
	n++;
	cout << &n << endl;
}

int main()
{
	int a=1, b=1;

	cout << &a << endl;
	Check1(a); // Pass by value: chi sao chep gia tri, 2 bien co 2 dia chi khac nhau

	cout << &b << endl;
	Check2 (b); // Pass by reference: Ham truy cap den dia chi cua bien va lam thay doi bien

	return 0;
}
