#include<iostream>
#include<exception>
using namespace std;
class MyException :public exception{
    public:
    const char * what() const throw(){
        return "Attempted to divided by Zero! \n";
    }
};
int main (){
    try {
        int x,y;
        cout << "Enter Two number: ";
        cin >> x>>y;
        if (y ==0 ){
            MyException z;
            throw z;
        }
    else {
        cout << "x/y = " << x/y << endl;
    }
    }
catch(exception& e){
    cout<< e.what();
}    
};