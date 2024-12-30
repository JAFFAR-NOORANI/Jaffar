// 6. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include<iostream>
using namespace std;
class Person
{
    private:
    int age;
    string name,country;
    public:
    void get_value()
    {
        cout<<"Enter Your Name:";
        cin>>name;
        cout<<"Enter Your Age:";
        cin>>age;
        cout<<"Enter Your Country:";
        cin>>country;
    }
    void set_value()
    {
        cout<<"\nYour Name:"<<name;;
        cout<<"\nYour Age:"<<age;
        cout<<"\nYour Country:"<<country;
        
    }

};
int main()
{
    Person p1;
    p1.get_value();
    p1.set_value();
}