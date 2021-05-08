#include <iostream>
#include <cstring>
using namespace std;

char *concat (const char* a, const char* b){
	int l = strlen(a) + strlen(b);
	char *c = new char [l];
	
	for(int i=0; i<strlen(a); i++)
		*(c+i) = *(a+i);
	for(int i=strlen(a); i<l; i++)
		*(c+i) = *(b+i-strlen(a));
	
	*(c+l) = '\0';
	return c;
}

int main(){
	char a[] = "Hello";
	char b[] = "World";
	cout << concat(a,b);
	return 0;
}
