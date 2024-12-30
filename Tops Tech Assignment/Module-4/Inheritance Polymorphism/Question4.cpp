// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int roll_no;

public:
    void getDetails()
    {
        cout << "Enter Student Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll_no;
    }
};

class Marks
{
protected:
    int mark1, mark2, mark3;

public:
    void getMarks()
    {
        cout << "Enter marks for Subject 1: ";
        cin >> mark1;
        cout << "Enter marks for Subject 2: ";
        cin >> mark2;
        cout << "Enter marks for Subject 3: ";
        cin >> mark3;
    }
};

class Result : public Person, public Marks
{
public:
    void showMarksheet()
    {
        int total = mark1 + mark2 + mark3;
        float percentage = total / 3.0;

        cout << "\n--- Student Marksheet ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks:" << endl;
        cout << "  Subject 1: " << mark1 << endl;
        cout << "  Subject 2: " << mark2 << endl;
        cout << "  Subject 3: " << mark3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        cout << "Grade: ";
        if (percentage >= 90)
            cout << "A+" << endl;
        else if (percentage >= 75)
            cout << "A" << endl;
        else if (percentage >= 60)
            cout << "B" << endl;
        else if (percentage >= 50)
            cout << "C" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main()
{
    Result student;

    student.getDetails(); 
    student.getMarks();   
    student.showMarksheet(); 

    return 0;
}
