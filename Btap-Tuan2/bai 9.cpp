#include <iostream>
using namespace std;

int main()
{
    unsigned int n; cin >> n;
    int sum = 0;
    while(n){
        int tmp = n%10;
        sum += tmp;
        n/=10;
    }
    cout << sum;
    return 0;
}
