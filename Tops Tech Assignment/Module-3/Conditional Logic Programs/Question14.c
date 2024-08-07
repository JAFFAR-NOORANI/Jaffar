// 14.WAP to find the largest of three numbers.

#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    printf("Enter the value of C : ");
    scanf("%d",&c);
    if(a>b && a>c){
    printf("A is the largest number");
    }
    else if(b>a && b>c){
    printf("B is the largest number");
    }
    else if (c>a && c>b){
    printf("C is the largest number");
    }
    else if (a==b){
        printf("A and B are equal");
    }
    else if (a==c){
        printf("A and C are equal");
        }
    else if (b==c){
        printf("B and C are equal");
    }
    else {
        printf("All are equal");
    }
}