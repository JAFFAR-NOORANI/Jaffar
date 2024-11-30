// class declaring the number function outside class.

#include<iostream>
using namespace std;
class person{
    int per_id;
    string name;
    public :
    void get_data(); //declare
    void show() ;
};
// data-type class name :: function name () {
// body of the function }

void person :: get_data () {
    cout << "Enter Id : ";
    cin >> per_id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin,name);
    // cin>>name;
}
void person :: show(){
    cout << "Id=" <<per_id<<endl<<"Name="<<name<<endl;
}
int main (){
    person p;
    p.get_data();
    p.show();
}