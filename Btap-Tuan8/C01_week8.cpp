#include <iostream>
using namespace std;

int strlen (char s[]){
	int k = 0;
	while(s[k] != '\0'){
		k++;
	}
	return k;
}

void reverse (char a[]){
	int len = strlen(a);
	for(int i=0; i<len/2; i++){
		char tmp = a[i];
		a[i] = a[l-i-1];
		a[l-i-1] = tmp;
	}
}

void delete_char (char a[], char c){
	for(int i=0; i<strlen(a); i++){
		if(a[i] == c){
			for(int j=i; j<strlen(a); j++){
				a[j] = a[j+1];
				i--;
			}
		}
	}
}

void pad_right(char a[], int n){
	if(strlen(a) == n) return;
	else{
		for(int i=strlen(a); i<n; i++) a[i] = '_';
		a[n] = '\0';
	} 
}

void pad_left (char a[], int n){
	int l = strlen(a);
	if(l=n) return;
	else {
		while(n-l>0){
			for(int i=l-1; i>=0; i--){
				a[i] = a[i+1];
			}
			a[0] = '-';
			l++;
		}
		a[n] = '\0';
	}
}

void truncate (char a[], int n){
	if(strlen(a) <= n) return;
	else a[n] = '\0';
}

bool is_palindrome (char a[]){
	int l = strlen(a);
	for(int i=0; i<l/2; i++){
		if(a[i] != a[l-i-1]) return false;
	}
	return true;
}

void trim_left (char a[]){
	for(int i=0; i<strlen(a); i++){
		if(a[i] == ' '){
			for(int j=i; j<strlen(a); j++)
				a[j] = a[j+1];
			i--;
		}
	}
}

void trim_right (char a[]){
	for(int i=0; i<strlen(a); i++)
		if(a[i] = ' ') a[i] = '\0';
}

int main(){
	char s[100]; cin >> s;
	//cout << reverse(s);
	
	char c; cin >> c;
	//cout << delete_char(s,c);
	
	int n; cin >> n;
	//cout << pad_right(s,n);
	//cout << pad_left(s,n);
	
	//cout << truncate(s,n);
	
	//cout << is_palindrome(s);
	
	//cout << trim_left(s);
	//cout << trim_right(s);
	return 0;
}
