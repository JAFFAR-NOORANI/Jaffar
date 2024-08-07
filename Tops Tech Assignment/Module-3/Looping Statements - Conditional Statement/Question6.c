// 6. WAP to print Fibonacci series up to given numbers


#include<stdio.h>
int main (){
int num,temp;
int n1=0,n2=1;
printf("How many Terms : ");
scanf("%d",&num);
printf("%d %d ",n1,n2);
int count =2;
while(count<=num){
    temp=n1+n2;
    n1=n2;
    n2=temp;
    count++;
    printf("%d ",temp);
}
}