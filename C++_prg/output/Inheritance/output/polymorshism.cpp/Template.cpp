// Template it is very powerfull feature in c++, where we can make a 
// generic code for the particulaer function or class.

#include<iostream>
using namespace std;
template <typename t>
t my_max(t a,t b){
    (a>b) ? cout << a : cout << b;
}
int main (){
    // calling function
    int num;
    cout <<"Enter Number: ";
    cin >> num;
    my_max<int>(10,num);
    cout<<endl;
    my_max<char>('p','k');
    cout<<"\n";
    my_max<string>("Hello","world");
    cout<<"\n";
    my_max<double>(41.25,63.74);

}
