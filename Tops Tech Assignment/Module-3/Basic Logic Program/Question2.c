// Write a program to make Simple calculator (to make addition, subtraction,
// multiplication, division and modulo)


#include <stdio.h>
int main(){
    int num1,num2,total;
    printf("\n Please Enter Number : ");
    scanf("%d %d",&num1,&num2);
    total = num1 + num2;
    printf("\n Addition of %d and %d = %d",num1,num2,total);
     total = num1 - num2;
    printf("\n Subtraction of %d and %d = %d",num1,num2,total);
     total = num1 * num2;
    printf("\n Multiplication of %d and %d = %d",num1,num2,total);
     total = num1 / num2;
    printf("\n division of %d and %d = %d",num1,num2,total);
      total = num1 % num2;
    printf("\n modulo of %d and %d = %d",num1,num2,total);
    
}