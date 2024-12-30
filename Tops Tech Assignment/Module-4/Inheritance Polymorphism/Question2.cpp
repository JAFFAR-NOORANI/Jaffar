// 2. Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Dimensions
{
protected:
    double length, width;

public:
    void setDimensions(double l, double w)
    {
        length = l;
        width = w;
    }
};

class Rectangle : public Dimensions
{
public:
    double calculateArea()
    {
        return length * width; 
    }

    void displayArea()
    {
        cout << "The area of the rectangle is: " << calculateArea() << endl;
    }
};

int main()
{
    Rectangle rect;

    double l, w;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    rect.setDimensions(l, w); 
    rect.displayArea();       

    return 0;
}
