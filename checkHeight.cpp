#include <iostream>

using namespace std;


int checkHeight(double height)
{
    double ref = 1.7;

    if (height - ref >= 0) {
        if (height - ref >= 1) {
            return 2;
        };

        return 1;
    } else {
        return 0;
    };
};


int main()
{
    double userHeight;
    cout << "Tell me your height: ";
    cin >> userHeight;

    int result = checkHeight(userHeight);

    if (result == 0) {
        cout << "It seems you're not tall...";
    } else {
        if (result == 1) {
            cout << "Oh, you're tall.";
        } else {
            cout << "Oh, you are very tall!";
        };
    };

    cout << endl;
    return 0;
};