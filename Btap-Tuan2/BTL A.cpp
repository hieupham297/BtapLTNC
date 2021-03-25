# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>200)cout << (n-200)*25000 + 50*20000 + 50*16000 + 100*12000;
    else if (n<=200 && n>=150) cout << (n-150)*20000 + 50*16000 + 100*12000;
    else if (n<150 && n>=100) cout << (n-100)*16000 + 100*12000;
    else cout << 100*12000;
    return 0;
}
