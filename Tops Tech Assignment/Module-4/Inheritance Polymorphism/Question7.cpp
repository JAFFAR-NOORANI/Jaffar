// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance


#include <iostream>
using namespace std;
class Grand_Parent {
protected:
    int Grand_Parent_Value;

public:
     Grand_Parent(int G_Value) {
        Grand_Parent_Value = G_Value;
        cout << "Grandparent Constructor Called Its Value : " << Grand_Parent_Value << endl;
    }
};
class Parent : public Grand_Parent {
protected:
    int Parent_Value;

public:
  
    Parent(int gValue, int P_Value) : Grand_Parent(gValue) {
        Parent_Value = P_Value;
        cout << "Parent Constructor Called Its Value : " << Parent_Value << endl;
    }
};
class Child : public Parent {
private:
    int Child_Value;

public:
    
    Child(int gValue, int pValue, int cValue) : Parent(gValue, pValue) {
        Child_Value = cValue;
        cout << "Child Constructor Called Its Value : " << Child_Value << endl;
    }
   void displayValues() {
       cout << "The Value of Grandparent is : " << Grand_Parent_Value << endl;
        cout << "The Value of Parent is : " << Parent_Value << endl;
        cout << "The Value of Child is : " << Child_Value << endl;
    }
};

int main() {
    Child child(25, 50, 75);

    cout << endl << "Displaying Values:" << endl;
    child.displayValues();

    return 0;
}