#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

bool leapYear (int n)
{
    if(n% 400==0) return true;
    else if(n%4 == 0 && n%100 != 0) return true;
    else return false;

}

int main()
{
    int n; cin >> n;
    leapYear(n);
    if(leapYear(n) == true ) cout << "true";
    else cout << "false";
    return 0;
}

