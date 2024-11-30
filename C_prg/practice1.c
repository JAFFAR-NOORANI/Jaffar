// 12.Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
int main (){
int num,rem,sum=0;
printf("Enter 4 digit Number:- ");
scanf("%d",&num);
int og_number=num;
while (num>0){
    rem=num%10;
    sum+=rem*rem*rem*rem;
    num/=0;
}
printf("Sum=%d",sum);
}