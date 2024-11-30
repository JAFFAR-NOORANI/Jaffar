// file handling

#include<iostream>
#include<fstream>
using namespace std;
int main (){
    int rollno;
    string name;
    cout << "Enter Roll No: ";
    cin>> rollno;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin,name);
    ofstream fout("C:\\Users\\admin\\Dropbox\\Jaffar\\C++_prg\\general\\data.txt");
    fout<<"Roll No: "<<rollno<<"\n Name: "<<name;

    cout << "Data Entered Successfully. "<<endl;
}