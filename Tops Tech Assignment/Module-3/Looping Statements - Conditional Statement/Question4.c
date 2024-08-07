// 4. WAP to print table up to given numbers

#include<stdio.h>
int main (){
int num,i;
printf("Please Enter Number For Tables : ");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("%d * %d =%d\n",num,i,num*i);
}
}