// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
    int select;
    int num1;
    int num2;
    int x = 0;
    int add;
    int sub;
    cout << "Calculator. please select one of the following: \n";
    cout << "press 1 for Addition \n";
    cout << "Press 2 for substraction \n";
    cout << "Press 3 for multiplication \n";
    cout << "press 4 for division \n";
    while (x == 0) {
        cin >> select;
        switch (select) {
            case 1:
                cout << "Please enter the first number: \n";
                cin >> num1;
                cout << "Please enter the second number: \n";
                cin >> num2;
                add = num1 + num2;
                cout << "The outcome is " << add  << endl;
                break;
            case 2:
                cout << "Please enter the first number: \n";
                cin >> num1;
                cout << "Please enter the second number: \n";
                cin >> num2;
                sub = num1 - num2;
                cout << "The outcome is " << sub << endl;
                break;
           
            
        }
    }
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
