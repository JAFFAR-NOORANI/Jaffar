// 17.Write a C program to check whether a triangle can be formed with the given
// values for the angles.

#include<stdio.h>
int main () {
    int x,y,z;
    printf("Enter Value Of 1st Angel : ");
    scanf("%d",&x);
    printf("Enter Vaule of 2nd Angel : ");
    scanf("%d",&y);
    printf("Enter Value of 3rd Angel : ");
    scanf("%d",&z);
    if (x+y+z==180){
        printf("Triangle can be formed by %d, %d, %d.",x,y,z);
        }
else {
    printf("Triangle can not be formed by %d, %d, %d.",x,y,z);
}
}