//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
// triangular number



#include<stdio.h>
int main (){
    int i,sum=0,num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i*(i+1)/2;
    }
printf("The Sum Of The triangular number %d is:- %d",num,sum);
}