#include<iostream>
#include<iomanip>
using namespace std;

int main () {
int num,num1;
float f=325.2344453;
cout << "Enter Number : ";
cin >>num>>num1;
cout << "NUM=" <<setw(5) <<num<<endl;
cout << "NUM1=" <<setw(2) <<num1<<endl;
// cout << "fno=" << setprecision(5)<<f<<endl;
cout << fixed;
cout << "fno="<< setprecision(3)<<f<<endl;
//setfill('x');
cout<<"num="<<setfill('x')<<setw(10)<<num<<endl;
}