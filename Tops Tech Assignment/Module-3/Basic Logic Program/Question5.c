// Find Area of Cube formula : a = 6a2

#include<stdio.h>
int main(){
    float area,total;
    printf("Enter the side of cube : ");
    scanf("%f",&area);
    total=6*(area*area);
    printf("Area of cube is : %.2f",total);
}