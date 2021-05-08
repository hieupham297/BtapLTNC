#include <iostream>
using namespace std;

int main(){
	int* p = new int;
	int p2 = 10;
	p = &p2;
	
	delete p;
	
	cout << *p;
	return 0;
}
