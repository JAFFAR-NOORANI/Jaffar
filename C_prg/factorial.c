//factorial number is a reverse number multiplication: 6!= 6*5*4*3*2*1 =720;

#include<stdio.h>
int main () {
    int i,num,res=1;
    printf("Enter a number:- ");
scanf("%d",&num);
for(i=num;i>=1;i--){
res=res*i;
}
printf("Factorail is %d",res);
}