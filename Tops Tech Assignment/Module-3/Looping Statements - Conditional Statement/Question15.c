// 15.Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main (){
    int num,i=1,sum=0;

    printf("Enter Number:- ");
    while (i<=10){
        scanf("%d",&num);
        sum+=num;
        i++;
    }
printf("Sum of 10 numbers : %d",sum);
}