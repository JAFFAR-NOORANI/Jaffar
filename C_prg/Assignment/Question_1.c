// 1. Display This Information using printf
// a. Your Name
// b. Your Birth date
// c. Your Age
// d. Your Address

#include<stdio.h>
int main(){
    char Name;
    printf("Enter Name :");
    scanf("%c",&Name);
    printf("\n My Name :%c",Name);

    int DOB;
    printf("\n Enter Your DOB :");
    scanf("%d",&DOB);
    printf("\n My DOB:%d",DOB);  

    int Age;
    printf("\n Enter Your Age :");
    scanf("%d",&Age);
    printf("\n My Age:%d",Age);

     char Add;
    printf("\n Enter Add :");
    scanf("%c",&Add);
    printf("\n My Address :%c",Add);
}