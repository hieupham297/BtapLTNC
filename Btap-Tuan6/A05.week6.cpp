#include <iostream>
using namespace std;

long F(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}

int main(){
	int n; cin >> n;
	cout << F(n) << endl;
	
	int f0 = 0, f1 = 1;
	long long fn = 0;
	for(int i=0; i<n; i++){
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	cout << fn;
	return 0;
}
