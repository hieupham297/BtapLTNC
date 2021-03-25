#include <iostream>
using namespace std;

int main()
{
    int n, count =0; cin >> n;
    int X = 7, a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] == X) cout << "So can tim la:" << a[i];
        else count ++;
    }
    if(count == n) cout << "Khong co so can tim";
    return 0;
}
