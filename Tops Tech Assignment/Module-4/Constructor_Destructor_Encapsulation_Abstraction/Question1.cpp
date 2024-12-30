// 1. Write a program to find the multiplication values and the cubic values using inline function


#include<iostream>
using namespace std;
inline int multi(int num)
{
    return num*num;
}
inline int cube(int num)
{
    return num*num*num;
}

int main(){
    int NUM;
    cout<<"Enter numbers:";
    cin>>NUM;
    cout<<"Square="<<multi(NUM)<<endl;
    cout<<"Cube="<<cube(NUM)<<endl;
}