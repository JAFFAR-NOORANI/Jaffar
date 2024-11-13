// 2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
int main (){
    int num1,num2;
    char choice;
    printf("Please Enter Numer 1 & 2:- ");
    scanf("%d %d",&num1,&num2);
    while (getchar() != '\n');  // need explaintion
    printf("Print Numbers :- %d %d",num1,num2);
    printf("\nSelect Choice: ");
    printf("\nSelect '+' for Addition ");
    printf("\nSelect '-' for Subraction ");
    printf("\nSelect '*' for Multiplication ");
    printf("\nSelect '/' for Divivsion ");
    printf("\nEnter Choice:- ");
    scanf("%c",&choice);
    switch (choice)
    {
    case '+':

        printf("\nAddition of %d + %d = %d ",num1,num2,num1+num2);
        break;

    case '-':
        printf("\nAddition of %d - %d = %d ",num1,num2,num1-num2);
        break; 

    case '*':
        printf("/nAddition of %d * %d = %d ",num1,num2,num1*num2);
        break;        
    
    case '/':
        printf("/nAddition of %d / %d = %d ",num1,num2,num1/num2);
        break; 

    default:
    printf(" Invalid Choice.... ");
        break;
    }
}