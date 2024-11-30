// use of scope resolution operator.


#include<iostream>
using namespace std;
int num=50;
int main (){
int num1,res;
cout << "Enter number : ";
cin >> num1;
res=num+num1;
cout << "Total = " <<res<<endl;
cout << "Accessing Global Number"<<endl;
cout << "Total Of All Variable : "<<::num+num+num1<<endl;
}
