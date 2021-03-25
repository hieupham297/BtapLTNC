#include <iostream>

using namespace std;

int main()
{
    int TNhap; cin >> TNhap;
    int bao_hiem = TNhap * 0.09;
    int TN_chiu_thue = TNhap - bao_hiem;
    int thue;
    if(TNhap > 2000000) thue = 500000*0.1 + 500000*0.15 + (TN_chiu_thue - 2000000)*0.2;
    else if(TNhap <= 2000000 && TNhap > 1500000) thue = 500000*0.1 + (TN_chiu_thue - 1500000)*0.15;
    else if(TNhap <= 1500000 && TNhap > 1000000) thue  = (TN_chiu_thue - 1000000) * 0.1;
    else thue = 0;

    cout << "Thue: " << thue << endl;
    cout << "Thu nhap nhan duoc sau thue: " << TNhap - bao_hiem - thue;
    return 0;
}
