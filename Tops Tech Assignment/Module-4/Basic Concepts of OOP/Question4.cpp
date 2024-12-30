/* 4. Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.
*/

#include<iostream>
using namespace std;
#define PI 3.14

class Circle
{
    private:
    float radius,area,circum;
    public:
    Circle()
    {
        cout<<"Enter Radius: "<<endl;
        cin>>radius;
        area=PI*radius*radius;
        cout<<"Area Of Circle :"<<area<<endl;
        circum=2*PI*radius;
        cout<<"Circumference Of Circle :"<<circum<<endl;

    }

};
int main()
{
    Circle();
}