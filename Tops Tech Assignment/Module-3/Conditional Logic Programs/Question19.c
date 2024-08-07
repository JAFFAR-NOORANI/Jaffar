// 19.Write a program in C to calculate and print the electricity bill of a given
// customer. The customer ID, name, and unit consumed by the user should
// be captured from the keyboard to display the total amount to be paid to the
// customer. The charge are as follow :
// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and
// the minimum bill should be of Rs. 256/-

#include<stdio.h>
int main (){
    char ch;
    float amt1,amt2;
    int id,unit,pu=5;
printf("Enter Name of Customer : ");
scanf("%c",&ch);
printf("Enter the Unit Consumed By Customer : ");
scanf("%d",&unit);
amt1 = unit*pu;
if(amt1<256){
    printf("Total Minimum Amout Paid by Customer '%c' is Rs 256",ch);
}
else if (amt1>= 256 && amt1<=800){
    printf("Total Amount Paid by Customer '%c' is %.2f",ch,amt1);
}
else if (amt1>800){
amt2 = amt1+ (amt1*0.18);
printf("Total amt of Customer '%c' is %.2f: ",ch,amt2);
}
}