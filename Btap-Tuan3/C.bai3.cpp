#include <iostream>
using namespace std;

int so_doi_guong(int n)
{
    int so_doi_guong = 0;
    while(n){
        int tmp = n%10;
        so_doi_guong = so_doi_guong*10 + tmp;
        n/=10;
    }
    return so_doi_guong;
}
bool check(int x)
{
    if(x == so_doi_guong(x)) return true;
    else return false;
}
int main()
{
    int n; cin >> n;
    int a,b;
    for(int i=0; i<n; i++){
        int ans = 0;
        cin >> a >> b;
        for(int j=a; j<=b; j++){
            so_doi_guong(j);
            check(j);
            if(check(j)) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
