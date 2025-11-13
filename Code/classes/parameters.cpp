#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Car {
    public:
        double speed(double spms);
        double spms;
    
    protected:
        double spkh;
};

double Car::speed(double spms) {
    Car::spkh = spms * (18.0/5.0); 
    
    return Car::spkh;
}

int main() {
    Car myObj; // Create an object of Car
    double spms;

    cout << "Enter speed in m/s: \n";
    cin >> spms;

    myObj.spms = 0;

    cout << endl << myObj.speed(spms) << endl << endl; // Call the method with an argument
    return 0;
}