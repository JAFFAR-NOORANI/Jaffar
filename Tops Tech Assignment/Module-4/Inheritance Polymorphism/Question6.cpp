// 6. Write a C++ Program to show access to Private Public and Protected using Inheritance


#include <iostream>
using namespace std;
class Base {
private:
    int Private_Variable; 
protected:
    int Protected_Variable; 
public:
    int Public_Variable; 

    Base(int pVar, int proVar, int pubVar) {
        Private_Variable = pVar;
        Protected_Variable = proVar;
        Public_Variable = pubVar;
    }
    void displayBase() {
        cout << "Private Variable: " << Private_Variable << endl; 
        cout << "Protected Variable: " << Protected_Variable << endl; 
        cout << "Public Variable: " << Public_Variable << endl; 
    }
};
class Derived : public Base {
public:
    Derived(int pVar, int proVar, int pubVar) : Base(pVar, proVar, pubVar) {}
    void displayDerived() {
        cout << "Protected Variable: " << Protected_Variable << endl; 
        cout << "Public Variable: " << Public_Variable << endl; 
    }
};

int main() {
    Base base(32, 60, 72); 
    Derived derived(50, 80, 100); 

    cout << "Base Class Variables:\n";
    base.displayBase();
    cout << "\nDerived Class Variables:\n";
    derived.displayDerived();
    cout << "\nAccessing Public Variable from Base Class: " << base.Public_Variable << endl;
    cout << "Accessing Public Variable from Derived Class: " << derived.Public_Variable << endl;

    return 0;
}