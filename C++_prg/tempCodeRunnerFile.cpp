#include<iostream>
#include<string>
#include <iostream>  
using namespace std;  
class A  
{  
    int a =35;  
    int b=45;
    int c=55;
    string name="Happy";
    friend class Z; 
};  
class Z  
{  
  public:  
    void display(A &a)  
    {  
        cout<<"value of a is : "<<a.a<<endl;  
        cout<<"value of b is : "<<a.b<<endl; 
        cout<<"value of c :"<<a.c<<endl;
        cout<<"Name:"<<a.name<<endl;
    }  
};  
int main()  
{  
    A a;  
    Z b;  
    b.display(a);  
    return 0;  
}