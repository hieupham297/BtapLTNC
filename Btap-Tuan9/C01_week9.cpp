#include <iostream>
using namespace std;

int strlen(const char s[]){
	int count = 0;
	while(s[count] != '\0'){
		count ++;
	}
	return count;
}

char* reverse (const char a[]){
	int l = strlen(a);
	char* p = new char [l];
	for(int i=0; i<strlen(a); i++)
		p[i] = a[l-i-1];
	return p;
}

char* delete_char (const char a[], char c){
	int l = strlen(a);
	char *p = new char [l];
	
	for(int i=0; i<strlen(a); i++)
		p[i] = a[i];
	for(int i=0; i<l; i++){
		if(p[i] == c){
			for(int j=i; j<l; j++)
				p[j] = p[j+1];
			i--;
		}
	}
	return p;
}

char* pad_right (const char a[], int n){
	char *p = new char [strlen(a)];
	for(int i=0; i<strlen(a); i++)
		p[i] = a[i];
	if(n-strlen(a) > 0){
		for(int i=strlen(a); i<n; i++) p[i] = '_';
		p[n] = '\0';
	}
	return p;
}

char* pad_left (const char a[], int n){
	int l = strlen(a);
    char *p = new char[l];
    for (int i=0; i<=l; i++)
        p[i]=a[i];
    while(n-l>0)
    {
        for (int i=l-1; i>=0; i--)
            p[i+1]=p[i];
        p[0] = '_';
        l++;
    }
    p[l]='\0';
    return p;
}

char* truncate (const char a[], int n){
	int l = strlen(a);
	char *p = new char [n];
	
	for(int i=0; i<n; i++)
		p[i] = a[i];
	return p;
}

char* trim_left(const char a[]){
	int l = strlen(a);
	char *p = new char [l];
	
	int count = 0;
	for(int i=0; i<l; i++){
		if(a[i] != ' '){
			p[count++] = a[i];
		}
	}
	return p;
}

char* trim_right(const char a[]){
		int l = strlen(a);
	char *p = new char [l];
	
	int count = 0;
	for(int i=0; i<l; i++){
		if(a[i] != ' '){
			p[count++] = a[i];
		}
	}
	return p;	
}

int main(){
	char s[100]; cin >> s;
//	char *p = reverse(s);
	
//	char c; cin >> c;
//	char *p = delete_char(s,c);
	
//	int n; cin >> n;
//	char *p = pad_right(s,n);
//	char *p = pad_left (s,n);
//	char *p = truncate(s,n);

//	char *p = trim_left(s);
	char *p = trim_right(s);
	cout << p << endl;
	return 0;
}
