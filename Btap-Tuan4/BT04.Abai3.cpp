#include <iostream>
using namespace std;

int main()
{
    int n,m,X=7, count = 0; cin >> n;
    int b[n];
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(b[i]>b[j]){
                m = b[i];
                b[i] = b[j];
                b[j] = m;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << b[i] << ' ';
    }

    for(int i=0; i<n; i++){
        if(b[i] == X) cout << "\nSo can tim la:" << b[i];
        else count ++;
    }
    if(count == n) cout << "\nKhong co so can tim";
    return 0;
}
