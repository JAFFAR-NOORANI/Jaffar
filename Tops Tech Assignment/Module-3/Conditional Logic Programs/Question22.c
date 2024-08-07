// 22 . WAP to input the week number and print week day.

#include<stdio.h>
int main (){
    int num;

    label1:
    printf("\nPlease Enter week number : ");
scanf("%d",&num);

switch (num)
{
case 1 :
    printf("Today Is Monday.");
    break;
    case 2:
    printf("Today Is Tuesday.");
    break;
    case 3:
    printf("Today Is Wednesday.");
    break;
    case 4:
    printf("Today Is Thursday.");
    break;
    case 5:
    printf("Today Is Friday.");
    break;
    case 6:
    printf("Today Is Saturday.");
    break;
    case 7:
    printf("Today Is Sunday.");
    break;
default:
    printf("Invalid Input.");
    goto label1;
    break;
}
}
