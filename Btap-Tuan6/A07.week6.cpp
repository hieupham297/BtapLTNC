#include <iostream>
#include <string>
using namespace std;

void hoanVi(string ip, string op){
    if(ip.length() == 0){
        cout << op << endl;
        return;
    }

    for(int i=0; i<ip.length(); i++){
        string k = ip;
        k.erase(i, 1);
        hoanVi(k, op+ip[i]);
    }
}

int main(){
    string s; cin >> s;
    hoanVi(s, "");
    return 0;
}
