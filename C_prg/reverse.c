//reverse number: 6325=5236
#include<stdio.h>
int main(){
   long long num,rev=0,rem;
    printf("Enter number:");
    scanf("%lld",&num);
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse=%lld",rev);
}