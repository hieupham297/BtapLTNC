#include <iostream>
using namespace std;

int main()
{
    int a[10000];
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Ba so co tong bang 0 la: \n";
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int h=j+1; h<n; h++){
                if(a[i]+a[j]+a[h] == 0)
                    cout << a[i] << ", " << a[j] << ", " << a[h];
            }
        }
    }
    return 0;
}
