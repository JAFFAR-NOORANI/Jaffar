// 25. Write a C program to input electricity unit charges and calculate total
// electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill


#include<stdio.h>
int main (){
    float amt1,amt2,amt3,amt4,cu1,cu2,cu3,cu4;
    int unit;
printf("Enter the Unit Consumed By Customer : ");
scanf("%d",&unit);
cu1 = 0.50;
cu2 = 0.75;
cu3 = 1.20;
cu4 = 1.50;


if(unit<=50){
    amt1 = ((unit*cu1)+(unit*cu1)*0.20);
    printf("Total Amout Paid by Customer  is Rs %.2f",amt1);
}
else if (unit>50 && unit<=150){
    amt2 = ((unit*cu2)+(unit*cu2)*0.20);
    printf("Total Amount Paid by Customer is %.2f",amt2);
}
else if (unit>150 && unit<=250){
    amt3 = ((unit*cu3)+(unit*cu3)*0.20);
    printf("Total Amount Paid by Customer is %.2f",amt3);
}
else if (unit>250){
    amt4 = ((unit*cu4)+(unit*cu4)*0.20);
    printf("Total Amount Paid by Customer is %.2f",amt4);
}
}