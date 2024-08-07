// 18.Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
int main (){
    float cp,sp,profit,loss;
    printf("Enter the cost price of the product : ");
    scanf("%f",&cp);
    printf("Enter the selling price of the product : ");
    scanf("%f",&sp);
    if(sp>cp){
        profit = sp-cp ;
        printf("You have profit of %f Rs.",profit);
    }
else if (cp>sp){
    loss = cp-sp;
    printf("You have loss of %f Rs.",loss);
}
else {
    printf("You have no profit or loss.");
}
}