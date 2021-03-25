#include <iostream>

using namespace std;

int main()
{
    double x; cin >> x;
    int y; cin >> y;
    double ans = 1;
    for(int i=1; i<=y; i++){
        ans *= x;
    }
    cout << ans;
    return 0;
}
