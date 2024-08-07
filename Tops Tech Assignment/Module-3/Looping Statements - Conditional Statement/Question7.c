// 7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
// 82746

#include<stdio.h>
int main() {
    long long num,rev=0,rem;
    printf("Please Enter Number : ");
    scanf("%lld",&num);
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse =%lld",rev);

}
