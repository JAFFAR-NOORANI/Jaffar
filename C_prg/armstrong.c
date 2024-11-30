//armstrong number :it is a number of it digit of its individual number;
//eg: 153= 1^3+5^3+3^3= 1+125+27  =153;

#include<stdio.h>
int main () {
    int num,rem,sum=0;
    printf("Please enter Number: ");
    scanf("%d",&num);
    int og_num=num;
    while(num>0){
rem=num%10;
sum+= rem*rem*rem;
num/=10;
    }
printf("sum=%d",sum);
if(og_num==sum){
    printf("\nIt is an armstrong number");
    }
else{
    printf("\n Its not an armstrong numer");
}
}

