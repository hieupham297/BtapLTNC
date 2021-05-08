#include <iostream>
using namespace std;

void f(int xval){
	int x;
	x = xval;
	cout << &x; // in dia chi cua x
}

void g(int yval){
	int y;
	cout << &y; // in dia chi cua y
}

int main(){
	f(7);
	cout << endl;
	g(11);
	return 0;
}

/* ð?a ch? c?a x và y gi?ng nhau v? c? hàm f và g cùng có 1 tham s? (int
, cùng ki?u tr? v?. 
