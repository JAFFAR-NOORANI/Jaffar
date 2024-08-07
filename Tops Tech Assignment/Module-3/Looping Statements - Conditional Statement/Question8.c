// 8. Write a program to find out the max from given number (E.g., No: -1562
// Max number is 6)


#include<stdio.h>
int main () {
    int n,num,max=0;
    printf("Please Enter Any Number:- ");
    scanf("%d",&num);
  while(num>0){
   n=num%10;
   if(n>max){
    max=n;
   }
  num/=10; 
  }
printf("Maximum Number is %d",max);
}