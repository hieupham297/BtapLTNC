#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    double sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max = a[0], min = a[0];
    for(int i=0; i<n; i++){
        sum += a[i];
        if(max < a[i]) max = a[i];
        if(min > a[i]) min = a[i];
    }
    cout << "Mean: " << sum/n << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}
