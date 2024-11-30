// class template :
#include<iostream>
using namespace std;
template <class T>
class A{
    public:
    T a,b;
    public:
    A(){
        cout<<"Enter Value A: ";
        cin >> a;
        cout << "Enter Value B: ";
        cin >> b;
        cout << a+b<<endl;
    }
};
int main (){
    A <string>ab;
    A <float>ba;
}