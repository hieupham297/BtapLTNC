#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c; cin >> a >> b >> c;
    double x1,x2;
    double delta = b*b - 4*a*c;
    if(delta > 0){
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/ 2*a;
        cout << "Phuong trinh co 2 nghiem phan biet x1 = " << x1 << " va x2 = " << x2;
    }
    if(delta = 0){
        double x = -b/2*a;
        cout << "Phuong trinh co nghiem kep x1 = x2 = " << x;
    }
    if(delta < 0){
        cout << "Phuong trinh co 2 nghiem phuc: " << endl;
        cout << "x1 = " << -b/(2*a) << " + " << abs(sqrt(-delta)/(2*a)) << "i" << endl;
        cout << "x2 = " << -b/(2*a) << " - " << abs(sqrt(-delta)/(2*a)) << "i" << endl;
    }
    return 0;
}
