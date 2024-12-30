// 8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include <iostream>
using namespace std;

class Calci {
public:
    int Addition(int a, int b) {
        return a + b;
    }
    double Addition(double a, double b) {
        return a + b;
    }

    int Subtraction(int a, int b) {
        return a - b;
    }
    double Subtraction(double a, double b) {
        return a - b;
    }

    int Multiplication(int a, int b) {
        return a * b;
    }
    double Multiplication(double a, double b) {
        return a * b;
    }

    double Division(int a, int b) {
        if (b != 0)
            return static_cast<double>(a) / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
    double Division(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calci calc;
    int intA = 16, intB = 4;
    cout << "Integer Operations:" << endl;
    cout << "Addition: " << calc.Addition(intA, intB) << endl;
    cout << "Subtraction: " << calc.Subtraction(intA, intB) << endl;
    cout << "Multiplication: " << calc.Multiplication(intA, intB) << endl;
    cout << "Division: " << calc.Division(intA, intB) << endl;
    double doubleA = 23.5, doubleB = 15.2;
    cout << "\nDouble Operations:" << endl;
    cout << "Addition: " << calc.Addition(doubleA, doubleB) << endl;
    cout << "Subtraction: " << calc.Subtraction(doubleA, doubleB) << endl;
    cout << "Multiplication: " << calc.Multiplication(doubleA, doubleB) << endl;
    cout << "Division: " << calc.Division(doubleA, doubleB) << endl;

    return 0;
}