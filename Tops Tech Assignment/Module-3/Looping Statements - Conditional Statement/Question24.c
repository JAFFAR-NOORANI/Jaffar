// 24. 1 + 2 + 3 + 4 + 5 + ... + n


#include<stdio.h>
int main (){
    int n,sum=0,i;
    printf("Please Enter Number Till You Want to Add:-  ");
    scanf("%d",&n);
for(i=1;i<=n;i++){
sum+=i;
}
printf("Sum of Natural Numbers Till %d is %d",n,sum);
}

