// WAP to convert years into days and days into years

#include<stdio.h>
int main (){
    int years,days;
    float days1,years1;
    printf("Enter The Number of Years: ");
    scanf("%d",&years);
    
    days=years*365;
    printf("\n Days Of %d years is  : %d",years,days);
    // new yearss
    printf("Enter The Number of Days: ");
    scanf("%f",&days1);
    years1=days1/365;
    printf("\n Years Of %f days1 is  : %f",days1,years1); // not porper
    
}