// 10. WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main () {
    int num;
    printf("Please Enter Any Number : ");
    scanf("%d",&num);
    if (num>0){
    printf("Number %d is Postivive",num);
      }
    else if (num<0){
     printf("Number %d is Negative",num);
     }
    else{
    printf("Number %d is Zero",num);
}
}