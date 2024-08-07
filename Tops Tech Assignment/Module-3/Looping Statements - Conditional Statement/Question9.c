// 9. Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
int main () {
    int num,rem,sum=0,n;
    printf("Please Enter Number:- ");
scanf("%d",&num);
n=num;
while(num>0){
 rem=num%10;
 sum+=rem;
 num/=10;
}
printf("Summation of %d is %d",n,sum);
}
