// Calculate compound interest  Formula Amount= P(1 + R/100)t

#include<stdio.h>
int main(){
    float p,r,t,amount;
    printf(" \n Enter Principle Amt : ");
    scanf("%f",&p);
    printf(" \n Enter Rate of Interest : ");
    scanf("%f", &r);
    printf(" \n Enter Time Period : ");
    scanf("%f", &t);
     amount = p*pow((1+(r/100)) , t);
    // amount = (p* (1+(r/100)) )* t;
    printf(" \n Amount = %f", amount);
}