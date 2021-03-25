#include <iostream>
#include <cmath>
using namespace std;

bool nguyenTo (int x)
{
	if(x<2) return false;
	for(int i=2; i<=sqrt(x); i++){
		if(x%i == 0) return false;
	}
	return true;
}

int main(){
	int n; cin >> n;
	nguyenTo(n);
	cout << nguyenTo(n) << endl;
	for(int i=1; i<n; i++)
        if(nguyenTo(i)) cout << i << ' ';
	return 0;
}
