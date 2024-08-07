// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main (){
    int i,sum=0,num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i*i;
    }
 printf("Sum of square till %d is %d",num,sum);
}