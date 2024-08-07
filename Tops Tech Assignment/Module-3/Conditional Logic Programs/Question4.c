// 4. WAP to make simple calculator (operation include Addition, Subtraction,
// Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main (){
    char choice;
    int num1,num2;
    printf("\n '+' for Addition ");
    printf("\n '-' for Subtraction ");
    printf("\n '*' for Multiplication ");
    printf("\n '/' for Division ");
    printf("\n '%' for Modulo");
    printf("Enter the Choice: ");
    scanf("%c",&choice);

    printf("\nPlease Enter Number 1 & 2 : ");
    scanf("%d %d",&num1,&num2);
    switch (choice)
    {
    case '+':
        printf("Addition= %d", num1+num2);
        break;
    case '-' :
    printf("Subtraction= %d", num1-num2);
    break;
    case '*':
    printf("Multiplication= %d", num1*num2);
    break;
    case '/':
    printf("Division= %d", num1/num2);
    break;
    case '%':
    printf("Modulo= %d", num1%num2);
    break;
        default:
        printf("\nWrong choice");
        break;
    }

}