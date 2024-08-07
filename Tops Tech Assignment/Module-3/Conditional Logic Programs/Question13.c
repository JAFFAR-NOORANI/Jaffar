// 13.WAP to find minimum number among 3 numbers using ternary operator


#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter the value of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    ((a<b) && (b<c))? printf("A is minimum.") : printf("");
    ((b<a) && (b<c))? printf("B is minimum.") : printf("");
    ((c<a) && (c<b))? printf("C is minimum.") : printf("");
}
