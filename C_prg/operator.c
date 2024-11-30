#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res=num1+num2;
    printf("\n Addition=%d",res);
    res=num1-num2;
    printf("\n Subtraction=%d",res);
    res=num1*num2;
    printf("\n multiplication=%d",res);
    res=num1/num2;
    printf("\n Division=%d",res);
    res=num1%num2;
    printf("\n Mudulo=%d",res);
    res=num1-num2;

    num1++;
    printf("\n post increment num1=%d",num1);
    ++num1;
    printf("\n pre increment num1=%d",num1);
    num2--;
    printf("\n post decrement num2=%d",num2);
    --num2;
    printf("\n pre decrement num2=%d",num2);
}