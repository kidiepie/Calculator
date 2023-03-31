// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include <iostream>
#include <cmath>
using namespace std;
class Sum {
    protected:
        double Num1;
        double Num2;
        double Exp;
};
class Add : public Sum {
    public:
        void Set_Num1(double x) {
            Num1 = x;
        }
        void Set_Num2(double y) {
            Num2 = y;
        }
        double Get_Ans() {
            return Num1 + Num2;
        }
};
class Sub : public Add {
    public:
    double Get_Ans() {
        return Num1 - Num2;
    }
};
class Mult : public Add{
    public: 
    double Get_Ans() {
        return Num1 * Num2;
    }
};
class Div : public Add{
    public:
    double Get_Ans() {
        return Num1 / Num2;
    }
};
class Roots : public Add {
    public:
        double Get_Ans() {
            return sqrt(Num1);
    }
};
class Exp : public Add {
    public:
        double Get_Ans() {
            return pow(Num1, Num2);
        }
};


int main()
{
    double x;
    double y;
    Add Add_obj;
    Sub Sub_obj;
    Mult Mult_obj;
    Div Div_obj;
    Roots rts_obj;
    Exp Exp_obj;
    int select;
    cout << "Calculator. please select one of the following: \n";
    cout << "press 1 for Addition \n";
    cout << "Press 2 for substraction \n";
    cout << "Press 3 for multiplication \n";
    cout << "press 4 for division \n";
    cout << "Press 5 for Square root\n";
    cout << "Press 6 for exponents\n";
    cout << "press 7 to quit \n";
    while (true) {
        cin >> select;
        switch (select) {
            case 1:
                cout << "Type your first number: \n";
                cin >> x;
                Add_obj.Set_Num1(x);
                cout << "Type your second number: \n";
                cin >> y;
                Add_obj.Set_Num2(y);
                cout << "The answer is " << Add_obj.Get_Ans()<<"\n";
                break;
            case 2:
                cout << "Type your first number: \n";
                cin >> x;
                Sub_obj.Set_Num1(x);
                cout << "Type your second number: \n";
                cin >> y;
                Sub_obj.Set_Num2(y);
                cout << "The answer is " << Sub_obj.Get_Ans()<<"\n";
                break;
            case 3:
                cout << "Type your first number: \n";
                cin >> x;
                Mult_obj.Set_Num1(x);
                cout << "Type your second number: \n";
                cin >> y;
                Mult_obj.Set_Num2(y);
                cout << "The answer is " << Mult_obj.Get_Ans()<<"\n";
                break;
            case 4:
                cout << "Type your first number: \n";
                cin >> x;
                Div_obj.Set_Num1(x);
                cout << "Type your second number: \n";
                cin >> y;
                Div_obj.Set_Num2(y);
                cout << "The answer is " << Div_obj.Get_Ans()<<"\n";
                break;
            case 5:
                cout << "Type the number you want to square root of: \n";
                cin >> x;
                rts_obj.Set_Num1(x);
                cout << "The answer is " << rts_obj.Get_Ans() << "\n";
                break;
            case 6:
                cout << "Type your number: \n";
                cin >> x;
                Exp_obj.Set_Num1(x);
                cout << "Type your Exponent: \n";
                cin >> y;
                Exp_obj.Set_Num2(y);
                cout << "The answer is " << Exp_obj.Get_Ans() << "\n";
                break;
            case 7:
                cout << "Thank you for using the app. \n";
                break;
            default:
                cout << "Error please select one of the listed options \n";
                cin >> select;
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
