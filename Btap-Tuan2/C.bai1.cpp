#include <iostream>
#include <cmath>

using namespace std;

bool check_prime(int x)
{
    if(x<2) return false;
    for(int i=2; i<= sqrt(x); i++){
        if(x%i == 0) return false;
    }
    return true;
}

int main()
{
    int n; cin >> n;
    check_prime(n);
    if(check_prime(n) == true) cout << "yes";
    else cout << "no";
    return 0;
}
