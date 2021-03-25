#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float weight, height;
    cin >> weight >> height;
    float BMI = weight/(height*height);
    cout << BMI;
    return 0;
}

