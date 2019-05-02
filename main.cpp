#include <iostream>
#include <iomanip>
// #define _USE_MATH_DEFINES   // for constants
#include <cmath>

using namespace std;

int fval;

void Fnumber(int f)
{
    double h=-1.5;

    for(int i=-2; i<f-2; i++)
    {
        cout << "Full stop: f/" << sqrt(pow(2,i)) << endl;
        cout << "Half stop: f/" << sqrt(pow(2,h)) << endl;
        h+=1.0;
    }
}

int main()
{
    cout << "How many f/ values to calculate?" << endl;
    cout << "[standard is 16]" << endl;
    cin >> fval;
    cout << endl;

    cout << "Standard f/ values: " << endl;
    cout << fixed << setprecision(8);

    Fnumber(fval);

    return 0;
}
