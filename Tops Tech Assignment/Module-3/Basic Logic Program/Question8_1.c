// Find circumference of Rectangle formula : C = 4 * a
// also find Area


#include<stdio.h>
int main(){
    float a,pie=3.14,radius,total,C;
 printf("\n Area for Circle = ");
    scanf("%f",&radius);
    total=pie*radius*radius;
    printf("\n Area for Circle = %f",total);
    C = 4 * total;
    printf("\n Circumference of Rectangle = %f",C);
}