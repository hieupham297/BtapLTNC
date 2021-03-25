#include <iostream>
using namespace std;

int main()
{
    string s = "abcd";
    // Cach 1
    for(int i=0; i<s.length(); i++){
        cout << s[i];
    }

    // Cach 2:
    cout << s;
    return 0;
}
