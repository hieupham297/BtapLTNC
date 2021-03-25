#include <iostream>
using namespace std;

bool doiXung (string s, string x)
{
    int l = s.length();
    for(int i=0; i<l/2; i++){
        if(s[i] == x[l-i-1]) return true;
    }
    return false;
}

int main()
{
    int n; cin >> n;
    string s[10000];
    for(int i=0; i<n; i++) cin >> s[i];

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(doiXung(s[i], s[j])){
                    int l = s[i].length();
                cout << s[i].length() << ' ' << s[i][l/2];
            }
        }
    }
    return 0;
}
