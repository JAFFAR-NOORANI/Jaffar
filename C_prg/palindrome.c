//palindrome number: It is the number which is same from both the side.

#include<stdio.h>
int main (){
    int num,og_num,rem,rev=0;
     printf("Enter Any number: ");
scanf("%d",&num);
og_num=num;
while(num>0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}
printf("Reverse=%d",rev);

if (rev==og_num){
    printf("\nIt is a palindrome number");
}
else{
    printf("\nIt is not a palindrome number");
}
}
