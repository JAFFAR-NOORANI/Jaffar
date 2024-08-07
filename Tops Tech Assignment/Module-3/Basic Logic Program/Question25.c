// 25. Accept 5 expense from user and find average of expense

#include<stdio.h>
int main () {
    float a,b,c,d,e,avg;
    printf(" Enter 1st Expense : ");
    scanf("%f",&a);
printf(" Enter 2nd Expense : ");
    scanf("%f",&b);
printf(" Enter 3rd Expense : ");
    scanf("%f",&c);
printf(" Enter 4th Expense : ");
    scanf("%f",&d);
printf(" Enter 5th Expense : ");
    scanf("%f",&e);        
avg = (a+b+c+d+e) / 5;
printf(" Average of Expense is : %f",avg);
}