// 3.Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include <iostream>
using namespace std;

class Car
{
private:
    int year;
    string company, model;

public:
    
    void set_data(int y, string comp, string mod)
    {
        this->year = y;
        this->company = comp;
        this->model = mod;
    }

    void input_data()
    {
        cout << "Enter Your Favorite Company: ";
        cin >> company;
        cout << "Enter Your Preferred Model: ";
        cin >> model;
        cout << "Enter Model Year: ";
        cin >> year;
    }

    
    void display_data()
    {
        cout << "Car Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car c1;
    c1.input_data();  
    c1.display_data(); 
    return 0;
}
