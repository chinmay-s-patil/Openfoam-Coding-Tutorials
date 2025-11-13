#include<iostream>
#include<cmath>

using namespace std;

void Magnitude(double x, double y, double z);

int main()
{
    double x, y, z, mu;
    cout << "\nOkay we will now calculate the Vector's Math \n";
    cout << "\nPlease specify the x \n" << endl;
    cin >> x;
    cout << "\nPlease specify the y \n" << endl;
    cin >> y;
    cout << "\nPlease specify the z \n" << endl;
    cin >> z;
    cout << "\nCalculated Magnitude is: \n" << endl;
    
    Magnitude(x, y, z);

    return 0;
}

void Magnitude(double x, double y, double z)
{
    cout << sqrt(pow(x,2) + pow(y,2) + pow(z,2)) << endl << endl;
}