// multiple inheritance: In this we have 2 parent class and its one child class.

#include<iostream>
using namespace std;
class Dad{
    protected:
    int money_d=5500;
    public:
    void show_d(){
        cout << "Dad Money = "<<money_d<<endl;
    }
};
class Mom{
    protected:
    int money_m=4500;
    public:
    void show_m(){
        cout << "Mom Money = "<<money_m<<endl; 
    }
};
class Child:protected Dad,Mom {
    public:
    void show(){
        show_d();
        show_m();
        cout << "Total Money= "<<money_d+money_m<<endl;
    }
};
int main(){
    Child ch;
    ch.show();
}