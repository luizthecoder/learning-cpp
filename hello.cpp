#include <iostream>
using namespace std;

int main()
{
    /*
      * Some data types in C++:
      *
      * 1. char - Single-character text.
      * 2. string - Multi-character text.
      * 3. int - Integer numbers.
      * 4. float - Floating-point numbers.
      * 5. double - An "extension" for the float type (most used).
    */

    char firstLetterOfMyName = 'L';
    string myName = "Louis L.";
    int myAge = 16; // MAY NOT use floating point with integers!
    double myHeight = 1.7;

    cout << "Hi! The first letter of my name is '" << firstLetterOfMyName << "' (because my name is '" << myName << "'). I am " << myAge << ", and my height is " << myHeight << "m :D" << endl;

    return 0;
}