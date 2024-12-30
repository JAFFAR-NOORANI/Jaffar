// 2. Write a C++ Program to find Area of Rectangle using inheritance

// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;
class Calculator
{
public:
    int num1, num2, Addition, subtraction, Multiplication, divide;

public:
    Calculator()
    {
        cout << "Enter Numbers: " << endl;
        cin >> num1 >> num2;
        Addition = num1 + num2;
        cout << "Addition: " << endl
             << num1 << " + " << num2 << " = " << Addition << endl;
        subtraction = num1 - num2;
        cout << "Subtraction: " << endl
             << num1 << " * " << num2 << " = " << subtraction << endl;
        Multiplication = num1 * num2;
        cout << "Multiplication: " << endl
             << num1 << " * " << num2 << " = " << Multiplication << endl;
        divide = num1 / num2;
        cout << "Division: " << endl
             << num1 << " / " << num2 << " = " << divide << endl;
    }
};
int main()
{
    Calculator demo;
}
