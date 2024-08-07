// WAP to Find Area And Circumference of Circle

#include <stdio.h>
int main(){
    float pie=3.14,radius,total;
    printf("\n Area for Circle = ");
    scanf("%f",&radius);
    total=pie*radius*radius;
    printf("\n Area for Circle = %f",total);
    total=2*pie*radius;
    printf("\n Circumference for Circle = %f",total);
    total=2*radius;
    printf("\n Diameter for Circle = %f",total);

}