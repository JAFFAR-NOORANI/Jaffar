// 19.Write a program in C to calculate and print the electricity bill of a given
// customer. The customer ID, name, and unit consumed by the user should
// be captured from the keyboard to display the total amount to be paid to the
// customer. The charge are as follow :
// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and
// the minimum bill should be of Rs. 256/-


#include<stdio.h>
int main (){
    char ch;
    float bsamt,amt1,amt2,amt3,amt4,cu1,cu2,cu3,cu4,cu5;
    int unit;
printf("Enter Name of Customer : ");
scanf("%c",&ch);
printf("Enter the Unit Consumed By Customer : ");
scanf("%d",&unit);
cu1 = 1.20;
cu2 = 1.50;
cu3 = 1.80;
cu4 = 2.00;
cu5 = 256;

if (unit<=234){
    bsamt = cu5;
    printf("Total Amount Paid by Customer '%c' is %.2f",ch,bsamt);
}
else if(unit>234 && unit<350){
    amt1 = unit*cu1;
    printf("Total Minimum Amout Paid by Customer '%c' is Rs %.2f",ch,amt1);
}
else if (unit>=350 && unit<600){
    amt2 = unit*cu2;
    printf("Total Amount Paid by Customer '%c' is %.2f",ch,amt2);
}
else if (unit>=600 && unit<800){
    amt3 = unit*cu3;
    printf("Total Amount Paid by Customer '%c' is %.2f",ch,amt3);
}
else if (unit>=800){
    amt4 = ((unit*cu4)+(unit*cu4)*0.18);
    printf("Total Amount Paid by Customer '%c' is %.2f",ch,amt4);
}

}