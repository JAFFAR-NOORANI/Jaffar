//wAP for single inheritance class "vehicle and derived "car" the base class has data_member color,max_speed and derived class have number of doors.

#include<iostream>
using namespace std;
class vehical {
    protected:
    int model_num;
    string car_name;
    public:
    void get_car(){
        cout<< "Enter Car Name: ";
        cin>> car_name;
        //cin.ignore();
        //getline(cin, car_name);
        cout<< "Enter Model Number: ";
        cin>> model_num;
    }
void show(){
    cout<< "Car Name : "<<car_name<<"\n Model Number: "<<model_num<<endl;
} 
};
class average:private vehical{
    public:
    int avg;
    public:
    void get_avg(){
        get_car();
        cout << "Enter Car Average: ";
        cin >> avg;
    }
 void display (){
    show();
    cout << "Average of Car is : "<<avg<<endl;
 }   
};

int main (){
    average Av;
    Av.get_avg();
    Av.display();
};
