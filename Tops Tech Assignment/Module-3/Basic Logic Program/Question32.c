//32  . Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main() {
    int num1,num2,res,size;
    // char a;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
res = num1+num2;
printf("Sum of both number : %d",res);
printf("\n size of sum is:%d",sizeof(res));
// printf("\n size of sum is:%c",sizeof(a));
}