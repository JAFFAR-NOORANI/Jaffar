// 5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.


#include <iostream>
using namespace std;

class Triangle{
private:
    int s1, s2, s3;

public:
    Triangle(int p, int q, int r) {
        s1 = p;
        s2 = q;
        s3 = r;
    }

    void check() {
        if (s1 == s2 && s2 == s3) {
            cout << "The triangle is equilateral." << endl;
        } else if (s1 == s2 || s1 == s3 || s2 == s3) {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    }
};

int main() {
    int a, b, c;

    cout << "Enter the length of the triangle: ";
    cin >> a >> b >> c;
    
    Triangle tr(a,b,c);
    tr.check();

}