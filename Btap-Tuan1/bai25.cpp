#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        sum += a[i];
        int max = a[0];
        int min = a[0];
        if(max < a[i]) max = a[i];
        if(min > a[i]) min = a[i];
    }
    cout << 1.0f*sum / n << endl;
    cout << max << ' ' << min;
    return 0;
}
