// 13. Write a program to find the max number from given two numbers using friend function



#include <iostream>
using namespace std;

class Max_Finder {
private:
    int a;
    int b;

public:

    Max_Finder(int x, int y) : a(x), b(y) {}


    friend int findMax(Max_Finder& mf);
};
int findMax(Max_Finder& mf) {
    return (mf.a > mf.b) ? mf.a : mf.b; 
}

int main() {
    int x, y;
    cout << "Enter Two Numbers : ";
    cin >> x >> y;

    Max_Finder maxFinder(x, y);
    int maxNumber = findMax(maxFinder);

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}