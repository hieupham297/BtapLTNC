#include <iostream>

using namespace std;

int main()
{
    unsigned int a, b; cin >> a >> b;
    for(int i= max(a,b); i<= a*b; i++){
        if(i%a == 0 && i%b == 0){
            cout << i;
            break;
        }
    }
    return 0;
}
