#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int x=1;
    for(int i=1; i<=n; i++){
            cout << i << ' ';
        for(int j=i+1; j<=n; j++){
            cout << j << ' ';
        }
        for(int z=1; z<x; z++){
            cout << z << ' ';
        }
        x++;
        cout << endl;
    }
    return 0;
}
