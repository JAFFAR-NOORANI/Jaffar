// 12.WAP to find maximum number among 3 numbers using ternary operator 

#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter the value of a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
((a>b) && (a>c))? printf("A is Maximum.") : printf("");
((b>a) && (b>c))? printf("B is maximum.") : printf("");
((c>a) && (c>b))? printf("C is maximum.") : printf("");
}