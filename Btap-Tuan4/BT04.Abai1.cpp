#include <iostream>
using namespace std;
// Sap xep giam dan
int main()
{
    int n,m; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}

// Sap xep tang dan
int main()
{
    int n,m; cin >> n;
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
    return 0;
}
