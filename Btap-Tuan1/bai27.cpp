#include <iostream>
using namespace std;

int main()
{
    int n;
    while(n != -1){
        cin >> n;
        if (n == -1) break;
        if(n >= 0 && n%5 == 0) cout << n/5 << endl;
        else cout << "-1" << endl;
    }
    cout << "Bye";
    return 0;
}
