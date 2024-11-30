// Write a program to calculate factorial using loop.

#include<iostream>
using namespace std;
int main (){
    int num,i,res=1;
    cout<< "Enter Number : ";
    cin>>num;
for(i=num;i>1;i--){
    res=res*i;
}
  cout<< "Factorial of " << num<< ": " << res;
}