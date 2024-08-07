// 5. WAP to print factorial of given number

#include<stdio.h>
int main (){
    int i,num,res=1;
    printf("Enter the number: \n");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        res=res*i  ;
}
printf("Factorail of %d",res);
}