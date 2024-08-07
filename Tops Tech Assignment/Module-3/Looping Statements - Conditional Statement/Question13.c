// 13.calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main () {
    int num,i,res=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        res=res*i;
    }
    printf("Factorial of %d = %d",num,res);
}

