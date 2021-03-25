#include <iostream>

using namespace std;

bool check_tamgiac (double a, double b, double c)
{
    if(a+b > c && b+c > a && a+c > c) return true;
    else return false;
}

int main()
{
    double a,b,c; cin >> a >> b >> c;
    if(check_tamgiac(a,b,c) == true){
        if(a==b || b==c || a==c){
            if(a==b && a*a+b*b==c*c || b==c && b*b+c*c==a*a || a==c && a*a+c*c==b*b)
                cout << "Tam giac vuong can";
            else if(a==b && b==c && a==c) cout << "Tam giac deu";
            else cout << "Tam giac can";
        }
        else {
            if(a*a+b*b==c*c || b*b+c*c==a || a*a+c*c==b*b) cout << "Tam giac vuong";
            else cout << "Tam giac thuong";
        }
    }
    else cout << "Khong tao thanh 1 tam giac";
    return 0;
}
