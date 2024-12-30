// 10. Write a program to concatenate the two strings using Operator Overloading


#include <iostream>
#include <cstring> 
using namespace std;

class My_String {
private:
    char* str;
public:
    
    My_String(const char* s) {
        str = new char[strlen(s) + 1]; 
        strcpy(str, s); 
    }


    My_String(const My_String& other) {
        str = new char[strlen(other.str) + 1]; 
        strcpy(str, other.str); 
    }
    ~My_String() {
        delete[] str;
    }
    My_String operator+(const My_String& other) {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str); 

        return My_String(newStr);
    }
    void display() const {
        cout << str << endl;
    }
};

int main() {
    My_String str1("Hi, ");
    My_String str2("ZAFF!");
    My_String result = str1 + str2;
    cout << "Concatenated String: ";
    result.display();

    return 0;
}
