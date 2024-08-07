// . Calculate compound interest(Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P

#include<stdio.h>
int main(){
    float p,r,t,amount,ci;
    printf(" \n Enter Principle Amt : ");
    scanf("%f",&p);
    printf(" \n Enter Rate of Interest : ");
    scanf("%f", &r);
    printf(" \n Enter Time Period : ");
    scanf("%f", &t);
    amount = p* (1+(r/100)) , t;
    printf(" \n Amount = %f", amount);
    ci = amount - p;
    printf(" \n Compound Interest = %f", ci);

}