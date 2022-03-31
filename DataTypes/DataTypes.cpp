// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

namespace pog {
    int i = 10;
}

int main() {
    unsigned int i = -34;
    float f = 23.23;
    bool b = 5;
    string name;

    const float TAX = 0.085;
    char initial;

    int ages[4];

    cout << "Git";

    cout << "Enter Name: "
    cin >> name;
    cout << name << endl;



    if (i) cout << "True\n";
    cout << pog::i << endl;



    cout << "Hello Data\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
