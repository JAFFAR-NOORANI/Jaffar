// problem with multiple inheritance.
#include<iostream>
using namespace std;
class X {
    public:
    void show(){
        cout << "I am in Clas X."<<endl;
    }
};
class Y{
    public:
    void show(){
        cout << "I am in Clas Y."<<endl;
    }
};
class Z:public X,Y{
public:
void show(){
    X::show();
    Y::show();
    cout<<"I am in class Z"<<endl;
}
};
int main (){
    Z zh;
    zh.show();
}