// WAP to create 2 function with add (int,int) and add (double,double).
// WAP of shape having functio area for circle,rectangle,triangle.

/* #include<iostream>
using namespace std;
class Function {
    public:
int mul_fun(int a,int b){
        return a+b;
    }
double mul_fun(double a,double b){
    return a+b;
}
};
int main (){
    int a,b;
    double a1,b1;
    cout << "Enter 2 Number for A B = ";
    cin >> a>>b;
    cout << "Enter Double Value for A B = ";
    cin >> a1>>b1;
    Function ff;
    cout << "Function For 2 Integer = "<<ff.mul_fun(a,b)<<endl;
    cout << "Function For 2 Double = "<<ff.mul_fun(a1,b1)<<endl;
}
*/

 #include<iostream>
using namespace std;
# define pie 3.14 
class Space {
    public:
float mul_fun(int r){
        return pie*r*r;
    }
int mul_fun(int l,int b){
        return l+b;
    }
double mul_fun(double h,double w){
    return 0.5*h*w;
}
};
int main (){
    float r;
    int l,b;
    double h,w;
    cout << "Enter Radius of Circle = ";
    cin >> r;
    cout << "Enter lenght and breath of rectangle = ";
    cin >> l >> b;
    cout << "Enter height and Width of Triangle = ";
    cin >> h>>w;
    Space ff;
    cout << "Area of Circle = "<<ff.mul_fun(r)<<endl;
    cout << "Area of Rectangle = "<<ff.mul_fun(l,b)<<endl;
    cout << "Area of Triangle = "<<ff.mul_fun(h,w)<<endl;
}

