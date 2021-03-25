# include <iostream>
using namespace std;
int main()
{
    char a[5];
    a[-1] = '1';
    a[5] = '2';   // N
    a[6] = '3';   // N+1
    cout << a[-1] << endl;
    cout << a[5] << endl;
    cout << a[6] << endl;
    return 0;
}
