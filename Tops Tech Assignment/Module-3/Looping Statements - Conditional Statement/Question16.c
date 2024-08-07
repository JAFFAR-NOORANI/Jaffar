// 16.Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
int main (){
    int n,sum=0,i=1;
    printf("Please Enter Number Till You Want to Add:-  ");
    scanf("%d",&n);
while(i<=n){
sum+=i;
i++;
}
printf("Sum of Natural Numbers Till %d is %d",n,sum);
}

