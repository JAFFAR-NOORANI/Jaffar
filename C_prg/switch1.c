// xto make menu driven calculator;

#include<stdio.h>  
int main() {
    char choice;
    int num1,num2;
    printf("/n Select Your Choice :");
    printf("/n 1. Addition : +");
    printf("/n 2. Subtraction : -");
    printf("/n 3. Multiplication : *");
    printf("/n Division : /");
    printf("/n Enter Choice : ");
    scanf("%c",&choice);
    switch (choice)
    {
        case '+' :
        printf("Enter number : ");
        scanf("%d %d",&num1,&num2);

        printf(" Addition=%d",num1+num2);
        break;
        case '-' :
        printf("Enter number : ");
        scanf("%d %d",&num1,&num2);
        printf(" Subtraction=%d",num1-num2);
        break;
        case '*' : 
        printf("Enter number : ");
        scanf("%d %d",&num1,&num2);
        printf(" Multiplication=%d",num1*num2);
        break;
        case '/' :
        printf("Enter number : ");
        scanf("%d %d",&num1,&num2);
        printf(" Division=%d",num1/num2);
        break;
        
    default:
    printf("Invalid");
        break;
    }
}