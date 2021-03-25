#include <iostream>
using namespace std;

void ArrayPassByValue (int a[]){
	for(int i=0; i<3; i++){
		a[i]++;
		cout << &a[i] << ' ';
	}
	cout << endl;
}

void ArrayPassByReference (int &a[]){
	for(int i=0; i<3; i++){
	a[i] ++;
	cout << &a[i] << ' ';
	}
	cout << endl;
}

void StringPassByValue (string s){
	s += 's';
	cout << &s << ' ';
}

void StringPassByReference (string& s){
	s += 's';
	cout << &s << ' ';
}

int main()
{
	int a[3];
	string s = "abc";

	for(int i=0; i<3; i++){
		cout << &a[i] << ' ';
	}
	cout << endl;
	ArrayPassByValue (a);

	cout << &s << endl;
	StringPassByValue(s)
	StringPassByReference(s)
	return 0;
}

// Mang k the truyen theo kieu tham chieu dc con string co the truyen bang ca 2 cach
