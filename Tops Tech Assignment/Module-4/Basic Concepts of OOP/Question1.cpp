// 1. WAP to create simple calculator using class

#include<iostream>
using namespace std;
class Addition
{
    public:
    int num1,num2,add;
    public:
    Addition()
    {
        cout<<"\nEnter 1st Number & 2nd Number for Addtion: ";
        cin>>num1>>num2;
        add=num1+num2;
        cout<<"Addtion Of "<<num1<<" + "<<num2<<" = "<<add;
    }
};
class Subtraction
{
    public:
    int num1,num2,sub;
    public:
    Subtraction()
    {
        cout<<"\nEnter 1st Number & 2nd Number for Subtraction: ";
        cin>>num1>>num2;
        sub=num1-num2;
        cout<<"Subtraction Of "<<num1<<" - "<<num2<<" = "<<sub;
    }

};
class Multiplication
{
    public:
    int num1,num2,multi;
    public:
    Multiplication()
    {
        cout<<"\nEnter 1st Number & 2nd Number for Multiplication: ";
        cin>>num1>>num2;
        multi=num1*num2;
        cout<<"Multiplication Of "<<num1<<" * "<<num2<<" = "<<multi;
    }
};
class Division
{
    public:
    int num1,num2,div;
    public:
    Division()
    {
        cout<<"\nEnter 1st Number & 2nd Number for Division: ";
        cin>>num1>>num2;
        div=num1/num2;
        cout<<"Division Of "<<num1<<" / "<<num2<<" = "<<div;
    }
};
int main()
{
    Addition();
    Subtraction();
    Multiplication();
    Division();

}

