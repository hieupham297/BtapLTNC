#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    if(a%7 == 0 && b%7 == 0 ) cout << "true";
    else cout << "false";
    return 0;
}

