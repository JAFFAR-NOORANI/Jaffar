// 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

#include<stdio.h>
int main (){
    float num,sum=0;
    printf("Enter Number:- ");
    scanf("%f",&num);
    for(int i=1;i<=num;i++){
        if(i%2!=0){
        sum+=(float)i/(i+1);
        printf("%d/%d -",i,i+1);
    }
    else{
        sum-=(float)i/(i+1);
        printf("%d/%d + ",i,i+1);
    
    }
    }
    printf(" =%.2f",sum);
}