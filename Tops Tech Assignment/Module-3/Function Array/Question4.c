// 4. WAP to find factorial using recursion

#include<stdio.h>
int fact(int n){
    if (n!=0){
return n * fact(n-1);
    }
    else {
        return 1;
    }
}

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Factorial Of %d is %d",num,fact(num));
}