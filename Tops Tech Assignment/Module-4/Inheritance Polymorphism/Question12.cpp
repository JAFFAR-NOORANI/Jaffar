// 12. Write a program to swap the two numbers using friend function without using third variable


#include <iostream>
using namespace std;

class Swap {
private:
    int a;
    int b;

public:
    Swap(int x, int y) : a(x), b(y) {}

    friend void swap(Swap& s);
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};
void swap(Swap& s) {
    s.a = s.a + s.b; 
    s.b = s.a - s.b; 
    s.a = s.a - s.b; 
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swap swapper(x, y);

    cout << "Before swapping: ";
    swapper.display(); 
    swap(swapper);

    cout << "After swapping: ";
    swapper.display(); 

    return 0;
}