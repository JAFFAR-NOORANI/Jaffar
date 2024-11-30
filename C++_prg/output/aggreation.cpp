// aggregation is a process to reuse the class as an entity reference. it is a HAS-A relationship for the class.

#include<iostream>
using namespace std;
class Address {
    public:
    string city,state;
Address(string ct,string st){
    this->city =ct;
    this->state=st;
}
};
class Employee{
    private:
    Address *address; // Has A relationship
    public:
    int eid;
    string name;
    public:
    Employee(int id,string nm,Address *address){
        this->eid=id;
        this->name=nm;
        this->address=address;
    }
void display(){
    cout << "Employee Details: "<<endl;
    cout << "Employee id = " << eid<<endl;
    cout << "Name: " << name<<endl;
    cout << "City: " << address->city<<endl;
    cout << "State: " << address->state<<endl;
    }    
};
int main (){
    int id;
    string st,ct,nm;
    cout << "Enter Id: ";
    cin>>id;
    cout << "Enter Name: ";
    cin.ignore();
    getline (cin, nm);
    cout << "Enter City: ";
    getline (cin, ct);
    cout << "Enter State: ";
    getline (cin, st);
    Address add(ct,st);
    Employee emp(id,nm,&add);
    emp.display();

}
