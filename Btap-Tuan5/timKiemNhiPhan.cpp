#include <iostream>
using namespace std;

int timKiem1 (int key, int a[], int low, int high){
	while(low<high){
		int cur = (low+high)/2;
		if(a[cur] == key) return cur;
		if(key > a[cur]) low = cur;
		else high = cur;
	}
	return -1;
}

int  timKiem2 (int key, int a[], int low, int high){
	if(low > high) return -1;
	else{
		int cur = (low+high)/2;
		if(key == a[cur]) return cur;
		if(key > a[cur]) return timKiem2(key,a,cur, high);
		else return timKiem2(key,a,low, high);
	}
	return -1;
}

int main(){
	int n; cin >> n;
	int a[10] = {2,5,7,9,10,13,14,25,29,31};
	int b[5] = {10,12,14,17,20};
	
	int ans1 = timKiem1(n,a,0,9);
	if(ans1 == -1) cout << "Khong tim thay key o trong mang\n";
	else cout << "Key nam o vi tri thu " << ans1+1 << " trong mang\n";
	cout << endl;
	
	int m; cin >> m;
	int ans2 = timKiem2(m,b,0,4);
	if(ans2 == -1) cout << "Khong tim thay key o trong mang\n";
	else cout << "Key nam o vi tri thu " << ans2+1 << " trong mang\n";
	return 0;
}
