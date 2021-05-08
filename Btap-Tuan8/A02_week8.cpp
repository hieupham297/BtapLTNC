#include <iostream>
using namespace std;

int main(){
	// Cau a
	char a[4] = "abc";
	for(char *cp = a; (*cp) != '\0'; cp++){
		cout << (void*) cp << " : " << (*cp) << endl;
	}
	
	// Cau b
	int b[4] = {1,2,3,4};
	for(int *cp = b; cp<(b+4); cp++)
		cout << (void*) cp << " : " << (*cp) << endl;
	cout << endl;
	
	// Cau c
	double c[4] = {0.5,1.5,2.5,3.5};
	for(double *cp = c; cp < (c+4); cp++)
		cout << (void*) cp << " : " >> (*cp) << endl;
	cout << endl;
	
	// Cau d
	double d[4] = {1.1,2.2,3.3,4.4};
	for(double *cp = d; cp<(d+4); cp+=2)
		cout << (void*) cp << " : " << (*cp) << endl;
	
	return 0;
}

