#include <iostream>

using namespace std;

int main()
{
    int khoanVay; cin >> khoanVay;
    double tongDu;
    for(int i=1; i<=12; i++){
        tongDu = khoanVay*0.02;
        khoanVay += tongDu;
    }
    cout << khoanVay;
    return 0;
}
