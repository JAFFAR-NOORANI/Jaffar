// 10.Write a program you have to make a summation of first and last Digit. (E.g.,
// 1234 Ans: -5)

#include<stdio.h>
int main(){
    int f=0,num,l=0,temp,sum=0;
    printf("Please Enter Number:- ");
    scanf("%d",&num);
    l=num%10;
    while(num>10){
       num/=10;
        }
f=num;
sum=f+l;
printf("Summation of first digit '%d' and last digit '%d' is '%d'",f,l,sum);
}
