// 20.Write a program in C to read any Month Number in integer and display the
// number of days for this month.

#include<stdio.h>
int main (){
    int month;
    printf("Please Enter Number of Month : ");
    scanf("%d",&month);
    switch (month)
    {
        case 1 :
        printf("January has 31 days.");
        break;
        case 2 :
        printf("February has 28 days.");
        break;
        case 3 :
        printf("March has 31 days.");
        break;
        case 4 :
        printf("April has 30 days.");
        break;
        case 5 :
        printf("May has 31 days.");
        break;
        case 6 :
        printf("June has 30 days.");
        break;
        case 7 :
        printf("July has 31 days.");
        break;
        case 8 :
        printf("August has 31 days.");
        break;
        case 9 :
        printf("September has 30 days.");
        break;
        case 10 :
        printf("October has 31 days.");
        break;
        case 11 :
        printf("November has 30 days.");
        break;
        case 12 :
        printf("December has 31 days.");
        break;
        default :
        printf("Invalid Input.");
        break;
    }
}