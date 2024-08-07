// 12.Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
int main (){
    int num,res,sum=0;
    printf("Enter a 4 digit number:- ");
    scanf("%d",&num);
    int og_num=num;
    while(num>0){
        res=num%10;
        sum+=res*res*res*res;
        num/=10;
    }
    printf("Sum = %d",sum);
if(og_num==sum){
    printf("\nIts an Armstrong Number.");
}
else{
    printf("\nIts not an Armstrong Number.");
}
}
