// exception handling : divide by zero is not possible;

#include<iostream>
using namespace std;
int main () {
    int x,y,z;
    cout << " Enter Number: ";
    cin>>x>>y>>z;
    try {
        if (x-y!=0){
            int res=z/(x-y);
            cout<<"Result="<<res<< endl;
        }
    else {
        throw (x-y);
            }
        }
catch (int r){
    cout << "not divisible by "<<r<<endl;
}

}