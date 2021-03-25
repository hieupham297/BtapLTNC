#include <iostream>
using namespace std;
int main()
{
    // cau a
    int a[10];
    for(int i=0; i<10; i++){
        cout << a[i] << ' ';
    }

    // cau b
    int b[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout << b[i] << ' ';
    }

    // cau c
    int c[] = {1,2,3,4};
    for(int i=0; i<4; i++){
        cout << c[i] << ' ';
    }
    return 0;
}
