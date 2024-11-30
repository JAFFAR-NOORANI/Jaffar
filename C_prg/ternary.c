// ternary operator := ?:  
//(condition)? true_part : false part;


// #include<stdio.h>
// int main(){
//     int num=90,num2=40;
//     (num<num2)?printf("num is greater"):printf("num2 is greater.");
// }

#include<stdio.h>
int main () {
int a,b;
printf("enter the value of a : ");
scanf("%d",&a);
printf("enter the value of b : ");
scanf("%d",&b);
(a>b)?printf("A is greater"):printf("B is greater");
}