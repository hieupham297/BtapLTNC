#include <iostream>
using namespace std;
void f (int*a){
	cout << sizeof(a) << endl;
}

int main(){
	int A[100];
	cout << sizeof(A) << endl;
	f(A);
	return 0;
}
