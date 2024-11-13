// 21. Write a C program to input basic salary of an employee and calculate
// its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%\

#include<stdio.h>
int main(){
    int base,gross,HRA,DA;

    printf("Enter base Salary Of Employee:- ");
    scanf("%d",&base);

    if(base<=10000){
        HRA=base*20/100;
        DA=base*80/100;
        gross= HRA+DA;
        printf("Gross Salary of Employee = HRA (%d) + DA (%d) = %d",HRA,DA,gross);
    }
else if (base>10000  && base<=20000 ){
    HRA=base*25/100;
        DA=base*90/100;
        gross= HRA+DA;
        printf("Gross Salary of Employee = %d + %d = %d",HRA,DA,gross);
}
else if (base>20000){
    HRA=base*30/100;
        DA=base*95/100;
        gross= HRA+DA;
        printf("Gross Salary of Employee = %d + %d = %d",HRA,DA,gross);
}
}


