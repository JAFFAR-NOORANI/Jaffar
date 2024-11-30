// multiple inheritance: In this we have 2 parent class and its one child class.

#include<iostream>
using namespace std;
class Dad{
    protected:
    int money_d=4500;
    public:
    void show_d(){
        cout<< "Dad Money = "<<money_d<<endl;
    }
};
class Mom{
    protected:
    int money_m=5500;
    public:
    void show_m(){
        cout<< "mom Money= "<<money_m<<endl;
    }
};
class child:protected Dad,Mom{
    public:
    void show(){
        show_d();
        show_m();
        cout << "Total Money = "<<money_d+money_m;
    }
};
int main (){
    child cd;
    cd.show();
}