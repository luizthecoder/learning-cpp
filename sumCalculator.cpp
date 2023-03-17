#include <iostream>
using namespace std;

int main()
{
    cout << "===== SUM CALCULATOR =====\n\n";

    int num0;
    int num1;
    int sum;

    cout << "Enter the first number: ";
    cin >> num0;

    cout << "Enter the second number: ";
    cin >> num1;

    sum = num0 + num1;
    cout << "\nResult: " << sum << endl;

    return 0;
}