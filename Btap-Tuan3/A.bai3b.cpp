#include <iostream>
using namespace std;

int main()
{
    // Cach 1
    char daytab[2][12] = {
 {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31}
};
    for(int i=0; i<2; i++){
        for(int j=0; j<12; j++){
            cout << daytab[i][j] << ' ';
        }
        cout << endl;
    }

    // Cach 2:
    char daytab2[2][12] = {
 31,28,31,30,31,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31
};
    for(int i=0; i<2; i++){
        for(int j=0; j<12; j++){
            cout << daytab2[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
