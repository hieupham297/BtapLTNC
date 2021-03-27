#include <iostream>
using namespace std;
int a[1000];
void func (int a[]){
	cout << &a << ' ' << &a[0];
}

int main(){
	func (a);
	cout << endl;
	cout << &a << ' ' << &a[0];
	return 0;
} 
