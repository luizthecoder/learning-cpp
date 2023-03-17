#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /* It's gonna print out the MBI of an imaginary person. */

    double mass = 70.5; // (in kilograms)
    double height = 1.7; // (in meters)
    double bmi = round(mass / pow(height, 2));

    cout << "My mass is equal to " << mass << "kg and my height is equal to/about " << height << "m. Then, my BMI is equal to " << bmi << "kg/m2." << endl;

    return 0;
}