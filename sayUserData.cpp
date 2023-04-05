#include <iostream>
using namespace std;


void sayName(string name)
{
    cout << "Hello, " << name << "!" << endl;
};

void sayAge(int age)
{
    cout << "It seems you're " << age << "..." << endl;
};


int main()
{
    string username;
    int age;

    cout << "Tell me your name: ";
    getline(cin, username);
    sayName(username);

    cout << "Tell me your age: ";
    cin >> age;
    sayAge(age);

    return 0;
};