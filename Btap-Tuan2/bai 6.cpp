#include <iostream>

using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    int UCLN;
    for(int i=min(a,b); i>=1; i--){
        if(a%i == 0 && b%i == 0){
            UCLN = i;
            break;
        }
    }
    cout << a/UCLN << "/" << b/UCLN;
    return 0;
}
