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

/* �?a ch? c?a x v� y gi?ng nhau v? c? h�m f v� g c�ng c� 1 tham s? (int
, c�ng ki?u tr? v?. 
