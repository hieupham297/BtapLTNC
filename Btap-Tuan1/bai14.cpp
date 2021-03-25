#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b;
    srand(time(0));
    for(int i=1; i<=5; i++){
        a = rand()%100 + 1;
        b = rand()%100 + 1;
        cout << a << ' ' << b << endl;
        if(a >= 50){
            cout << "Bob choose: " << a << endl;
            if(a > b) cout << "Bob win" << endl;
            else cout << "Bob loose" << endl;
        }
        else {
            cout << "Bob choose: " << b << endl;
            if(b > a) cout << "Bob win" << endl;
            else cout << "Bob loose";
        }
        cout << endl;
    }
    return 0;
}
