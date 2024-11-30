// multilevel inheritance:- 

#include<iostream>
using namespace std;
class Employee{
    public:
    int eid;
    string name;
    public:
    void get_data(){
        cout << "Enter Employee Id : ";
        cin >>eid;
        cout << "Enter Name : ";
        cin.ignore();
        getline(cin,name);
    }
};
class Task:public Employee{
    public:
    int t1,t2;
    public:
    void get_task(){
        get_data();
        cout << "Enter 2 Task : ";
        cin>>t1>>t2;
    }
};
class Appraisal:public Task{
    public:
    int total_task;
    public:
    void all_task(){
        get_task();
        total_task=t1+t2;
    }
    void display(){
        cout<<"Employee Id = "<<eid<<"\n<<name="<<"\nt1="<<t1<<"\nt2="<<t2<<"\n Total Task= "<<total_task<<endl;
    }
};
int main(){
  Appraisal app;
  app.all_task();
  app.display();
};