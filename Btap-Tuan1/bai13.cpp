#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y; cin >> x >> y;
    float distance = 1.0f*sqrt(x*x+y*y);
    cout << distance;
    return 0;
}
