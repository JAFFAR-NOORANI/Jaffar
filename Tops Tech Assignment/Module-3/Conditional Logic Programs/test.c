#include<stdio.h>
int main(){
char ch;
int customerid, consumedunit;
float charge1, charge2, charge3,charge4, surcharge, grossamount, netamount;
printf("Enter customer Id:");
scanf("%d", &customerid);
printf("\nName of customer:");
scanf("%c", &ch);
printf("\nEnter unit consumed by customer:");
scanf("%d", &consumedunit);
charge1=1.20;
charge2=1.50;
charge3=1.80;
charge4=2.00;

if (consumedunit <350){
    grossamount=consumedunit*charge1;
    printf("\nTotal amount paid by customer is:%.2f", grossamount, charge1);
}
else if (consumedunit>=350 && consumedunit<600){
    grossamount=consumedunit*charge2;
    printf("\nTotal amount paid by customer is:%.2f", grossamount, charge2);
}
else if(consumedunit>=600 && consumedunit<800){
    grossamount=consumedunit*charge3;
    printf("\nTotal amount paid by customer is:%.2f", grossamount, charge3);
}
else{
    grossamount=consumedunit*charge4;
    printf("\nTotal amount paid by customer is:%.2f", grossamount, charge4);
}

if (grossamount>800){
    surcharge=grossamount*18/100;
    printf("\nSurcharge amount:%.2f", surcharge);
}

netamount=grossamount+surcharge;
if(netamount<256){
netamount=256;
printf("\nNetamount paid by customer:%.2f", netamount);
}

}