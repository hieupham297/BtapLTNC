#include <iostream>
using namespace std;

int main(){
	int* p = new int;
	int* p2 = p;
	*p = 10;
	delete p; // p2 dang tro toi p ma la thu hoi bo nho cap cho p nen p2 khong tro toi dau nua 
	cout << *p2;
	delete p2;
	return 0;
}
