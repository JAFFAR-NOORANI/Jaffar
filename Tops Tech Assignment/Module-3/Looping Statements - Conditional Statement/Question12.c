// 12.Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
int main (){
int num,res,sum=0;
printf("Enter 3 digit Number:- ");
scanf("%d",&num);
int og_number=num;
while (num>0){
    res=num%10;
    sum+=res*res*res;
    num/=10;
}
printf("Sum=%d",sum);
if(og_number==sum){
    printf("\nIts an Armstrong number");
}
else {
    printf("\nIts not an Armstrong number");
}
}