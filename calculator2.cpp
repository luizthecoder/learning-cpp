#include <iostream>
using namespace std;

void askUserForOperation()
{
    cout << "\nWhat operation do you want to do with these numbers?" << endl;
    cout << "+ -> Addition\n" << "- -> Subtraction\n" << "x -> Multiplication\n" << "/ -> Division\n\n";
};

double doOperation(double num1, double num2, char op)
{
    if (op == '+') {
        return num1 + num2;
    } else if (op == '-') {
        return num1 - num2;
    } else if (op == 'x') {
        return num1 * num2;
    } else {
        return num1 / num2;
    };
};


int main() {
    cout << "== CALCULATOR 2.0 ==" << "\n\n";

    double num1, num2;
    char op;

    cout << "Give me a number: ";
    cin >> num1;
    cout << "Give me another: ";
    cin >> num2;

    askUserForOperation();
    cin >> op;
    cout << endl;

    if (op != '+' && op != '-' && op != 'x' && op != '/') {
        cout << "ERROR: Invalid operation.";
    } else {
        double result = doOperation(num1, num2, op);
        cout << num1 << " " << op << " " << num2 << " = " << result;
    };

    cout << endl;

    return 0;
};