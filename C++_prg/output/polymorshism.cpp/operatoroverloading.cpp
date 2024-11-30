// operator overloading :
// syntax:
/*return_type operator (operator symbol)(class_name &object_name){ // body of function }*/

// program for operator overloading with > symbol.

#include<iostream>
using namespace std;
class Overload{
    public:
    int num;
    public:
    Overload(){
        cout << "Enter Number : ";
        cin >> num;
    }
    Overload operator > (Overload &obj) {
        if (num>obj.num){
            cout<<num<<"is greater"<<endl;
        }
    else {
        cout <<obj.num<<"is not greater"<<endl;
     }
    }
Overload operator== (Overload &obj1){
    if (num==obj1.num){
        // cout<<num<<endl;
        cout<< "They are equal";
    }
    else {
        //cout<<num<<endl;
        cout << "They are not equal";
    }
}
};
int main (){
Overload ov1,ov2;
// int r= (ov1>ov2) || (ov1==ov2);
// cout <<r;
 //(ov1 == ov2);
 (ov1>ov2);
    // if(ov1>ov2){
    //     cout<<"It is greater.";
    // }
    // else{
    //     cout<<"they are equal";
    // }

}