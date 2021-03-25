#include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    int month_match[13] = {0, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cin >> day >> month >> year;
    int weekOfDay;
    int C = int(year/100);
    int Y = year % 100;
    if (month == 1 || month == 2)
        Y--;
    weekOfDay = (day + int(2.6*month_match[month] - 0.2) - 2*C + Y + int(Y/4) + int(C/4)) % 7;
    cout << weekOfDay;
    return 0;
    }
