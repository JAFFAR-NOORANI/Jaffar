// 11.WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main (){
    int num1;
    printf("Please Enter Any Number : ");
    scanf("%d",&num1);

    (num1%2==0)?printf("Number %d is Even",num1):printf("Number %d is Odd",num1);
}