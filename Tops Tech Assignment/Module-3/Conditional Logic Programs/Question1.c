// 1. Write a C program to accept two integers and check whether they are equal
// or not

#include<stdio.h>
int main (){
    int num1,num2;
    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);
if(num1==num2){
    printf("Both Numbers Are Equal");
}
else {
    printf("Both Numbers Are Not Equal");
}
}