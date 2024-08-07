// Accept monthly salary from the user and deduct 10% insurance premium,
// 10% loan installment find out of remaining salary.

#include<stdio.h>
int main(){
    int ip,li,s,rs;
    printf("\n Enter the salary :");
    scanf("%d",&s);
ip = s*10/100;
li =  s*10/100;
    printf("Insurance Premium :%d",ip);
    printf("\n Loan Installment :%d",li);
rs = s-ip-li;
printf("\n Remaining Salary :%d",rs);
}