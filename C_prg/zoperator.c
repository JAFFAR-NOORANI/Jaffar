#include<stdio.h>
int main(){
    int num1,num2,num3,num4,res;
    printf("Enter Numbers : ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
//     res=num1+num2+num3+num4;
// printf("\n Addition=%d",res);
res=num1*num2+num3-num4;
printf("\n Mix=%d",res);
}