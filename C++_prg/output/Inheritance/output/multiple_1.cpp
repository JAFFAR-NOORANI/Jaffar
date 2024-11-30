// problem with multiple inheritance.

#include<iostream>
using namespace std;
class A{
public:
void show(){
    cout << "I am Class A" << endl;
}
};
class B{
    public:
    void show(){
        cout << "I am B" << endl ;
    }
};
class C: public A,B{
public:
void show(){
    A::show();
    B::show();
    cout<< "I am in class C"<<endl;
}
};
int main(){
    C ch;
    ch.show();
}