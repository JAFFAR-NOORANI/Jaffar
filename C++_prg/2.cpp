// Wap menu driven program to calculate area of circle, rectangle, trinagle.

#include<iostream>
using namespace std;
int circle(){
    float r,area;
    cout << "Enter Radius: ";
    cin>>r;
area = 3.14*(r*r);
cout << "Radius of Circle is : " << area <<endl;
}
int rec(){
float l,w,area;
cout << "Enter lenght : ";
    cin>>l;
cout << "Enter Width : "<<endl;
    cin>>w; 
    area = l * w ;
cout << "Area of Rectangle is : " << area <<endl;
}

int tri(){
    float base,h,area;
    cout << "Enter base : ";
    cin>>base;
cout << "Enter height : "<<endl;
    cin>>h;
area = 0.5 * base * h;    
cout << "Area of triangle is : " << area ;

}
int main (){
    circle();
    rec();
    tri();
  } 