// Accept number of students from user. I need to give 5 apples to each
// student. How many apples are required?



#include<stdio.h>
int main(){
    int s,a=5,total;
    printf("Enter Number Of Student :");
    scanf("%d",&s);
   total= s*a;
    printf("\n Apple Require For Student = %d",total);
}