//  Convert kilometers into meters

#include<stdio.h>
int main() {
     int m;
     float km;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &km);
    m = km *1000;
    printf("The distance in meters is: %d", m);
}                       