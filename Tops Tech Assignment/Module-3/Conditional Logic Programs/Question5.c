// 5. Check Number Is Positive or Negative

#include<stdio.h>
int main (){
    int num1;
    printf("Enter a number : ");
    scanf("%d",&num1);
    if(num1>=0){
        printf("Number %d is postive",num1);
    }
    else{
        printf("Number %d is negative",num1);
    }
}