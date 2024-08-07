// . Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
int main(){
    float b,h,Area;
    printf("Enter Breath Of Area :");
    scanf("%f",&b);
    printf("Enter Height Of Area :");
    scanf("%f",&h);
    Area = 0.5*(b*h);
    printf("\n Area of Triangle = %f",Area);
}