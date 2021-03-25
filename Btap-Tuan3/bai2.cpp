#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int min = a[0], max = a[0];
    int sum = 0,count = 0;
    for(int i=0; i<n; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
        if(a[i]%2 == 0) sum += a[i];
        if(a[i]%2 == 1) count ++;
    }

    cout << "\nPhan tu nho nhat: " << min << endl
         << "Phan tu lon nhat: " << max << endl
         << "Tong cac phan tu chan: " << sum << endl
         << "So luong cac phan tu le: " << count;
    return 0;
}
