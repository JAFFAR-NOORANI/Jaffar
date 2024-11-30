// polymorphism : poly means many and morphism means forms.
// they are of two types 
/*
1. compile time polymorphism.(early binding,static binding)
    a. function/method overloading.
    b. operator overloading.
2. Run time polymorphism.(late binding,dynamic binding)
    a. function/method overriding.
*/

 // program function overloading. having same function name but parameter different,or different types of parameter.


#include<iostream>
using namespace std;
class Function {
    public:
    int mul_fun(int a,int b){
        return a*b;
    }
    int mul_fun( int a,int b, int c){
        return a*b*c;
    }
    int mul_fun(double a,double b ){
        cout << "Output= "<<a*b<<endl;
    }
};
 int main(){
    int a,b,c;
    double a1,b1;
    cout<<"Enter a,b,c=";
    cin>>a>>b>>c;
    cout<<"Enter double values:";
    cin>>a1>>b1;
    Function ff;
    cout<<"Function for integer=="<<ff.mul_fun(a,b)<<endl;
    cout<<"Function for 3 integer=="<<ff.mul_fun(a,b,c)<<endl;
  //  cout<<"Function double=="<<ff.mul_fun(a1,b1)<<endl;
    ff.mul_fun(a1,b1);
 }