// 23. C Program to Reverse a Number Using FOR Loop
// Series Program: 

#include<stdio.h>
int main () {
    int num,rev=0,rem;
    printf("Please Enter Any Number:- ");
    scanf("%d",&num);
    int og_number = num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reverse of %d is %d",og_number,rev);
}
