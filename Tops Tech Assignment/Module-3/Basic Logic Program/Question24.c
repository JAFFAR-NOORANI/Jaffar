// 24. Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
int main() {
    char a,b,c,d,e;
    int a1,b1,c1,d1,e1,avg,ts;
    printf(" Enter 1st Employee Name : ");
    scanf("%c",&a);
    printf("Enter 2nd Employee Name : ");
    scanf("%c",&b);
    gets(b);
    printf("\n Enter 3rd Employee Name : ");
    scanf("%c",&c);
    printf("\n Enter 4th Employee Name : ");
    scanf("%c",&d);
    printf("\n Enter 5th Employee Name : ");
    scanf("%c",&e);

    printf("\n Enter 1st Employee Salary : ");
    scanf("%d",&a1);
    printf("\n Enter 2nd Employee Salary : ");
    scanf("%d",&b1);
    printf("\n Enter 3rd Employee Salary : ");
    scanf("%d",&c1);
    printf("\n Enter 4th Employee Salary : ");
    scanf("%d",&d1);
    printf("\n Enter 5th Employee Salary : ");
    scanf("%d",&e1);

    avg = (a1+b1+c1+d1+e1) /5 ;
    ts = a1+b1+c1+d1+e1;
    printf("\n Average Salary : %d",avg);
    printf("\n Total Salary : %d",ts);
}