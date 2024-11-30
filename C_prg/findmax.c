//program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
int main (){
    int num,rem,max=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num>0){
        rem=num%10;
        if(rem>max){
            max=rem;
        }
num/=10;
    }
    printf("Maxium Number is %d",max);
}
