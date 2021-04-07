#include <iostream>
#include <algorithm>
using namespace std;

void nhap_mang(int*a, int n){
	for(int i=0; i<n; i++)
	cin >> *(a+i);
}

void in_mang(int*a, int n){
	for(int i=0; i<n; i++)
	cout << *(a+i) << ' ';
}

int BinarySearch (int key, int*a, int low, int high){
	while(low<high){
		int cur = (low+high)/2;
		if(key == a[cur]) return cur;
		if(key > a[cur]) low = cur;
		else high = cur;
	}
	return -1;
}

int main(){
	int n; cin >> n;
	int a[n];
	nhap_mang(a,n);
	sort(a,a+n);
	cout << "Mang sau khi sap xep: \n";
	in_mang(a,n);
	
	int key; cin >> key;
	int ans = BinarySearch(key,a,0,n);
	if(ans == -1) cout << "Khong tim thay key trong mang\n";
	else cout << "Key nam o vi tri thu " << ans+1 << " trong mang\n";
	return 0;
}
