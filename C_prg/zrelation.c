#include<stdio.h>
int main(){
    int num1,num2,total;
    printf("Please Enter Any Number =");
    scanf("%d %d",&num1,&num2);
    total=(num1>num2);
    printf("\n Greater than :%d",total);
    total=(num1<num2);
    printf("\n Less Than =%d",total);
    total=num1>=num2;
    printf("\n Greater than Equal to =%d",total);
    total= num1<=num2;
    printf("\n Less than Equal to=%d",total);
    total=num1 != num2;
    printf("\n not equal=%d",total);
    total= num1 == num2;
    printf("\n double equal=%d",total);
}
