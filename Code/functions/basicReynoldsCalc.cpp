#include<iostream>
using namespace std;

void Reynolds(double rho, double v, double d, double mu);

int main()
{
    double rho,v,d,mu;
    cout << "\nOkay we will now calculate Reynold's Number \n";
    cout << "\nPlease specify the Velocity in m/s \n" << endl;
    cin >> v;
    cout << "\nPlease specify the Density in kg/m3 \n" << endl;
    cin >> rho;
    cout << "\nPlease specify the Dynamic Viscosity in SI Units \n" << endl;
    cin >> mu;
    cout << "\nPlease specify the Characteristic Length in m \n" << endl;
    cin >> d;
    cout << "\nCalculated Reynold's Number is: \n" << endl;
    
    Reynolds(rho,v,d,mu);

    return 0;
}

void Reynolds(double rho, double v, double d, double mu)
{
    cout << (rho*v*d)/mu << endl << endl;
}