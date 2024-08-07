// 14.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
int main (){
    int i,num;

    for (i=0;i<=5;i++){
        printf("Please Enter Number For Which You Want Factorials:- ");
        scanf("%d",&num);
int fact=1,j;

for (j=1;j<=num;j++){
fact=fact*j;
}
printf("Factorial of %d = %d\n",num,fact);
    }
}