#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

bool check (int x, int y, int z)
{
    bool b = true;
    if(x<y && y<z || x>y && y>z) b = true;
    else b = false;
    return b;
}

int main()
{
    int x,y,z; cin >> x >> y >> z;
    check (x,y,z);
    cout << check(x,y,z);
    return 0;
}

