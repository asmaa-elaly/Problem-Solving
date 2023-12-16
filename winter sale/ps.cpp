#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


int main()
{
    int X;
    double P;
    cin >> X >> P;
    // Calculating the price before discount
    double originalPrice = (P * 100) / (100 - X);
    // Rounding up to two decimal places
    cout << fixed << setprecision(2) << originalPrice << endl;
    return 0;


}

