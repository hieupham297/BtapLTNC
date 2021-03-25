#include <iostream>
using namespace std;

int main()
{
    double a,b,c,a1,b1,c1;
    double D, Dx, Dy, x, y;
    cin >> a >> b >> c >> a1 >> b1 >> c1;

    D = a*b1 - a1*b;
    Dx = c*b1 - c1*b;
    Dy = a*c1 - a1*c;

    if(D == 0){
        if(Dx+Dy == 0) cout << "He phuong trinh co vo so nghiem";
        else cout << "He phuong trinh vo nghiem";
    }
    else {
        x = Dx/D;
        y = Dy/D;
        cout << "He phuong trinh co 2 nghiem phan biet x = " << x << " va y = " << y;
    }
    return 0;
}
