// 22. Accept 3 numbers from user using while loop and check each numbers
// palindrome  means 12345   is 54321

#include<stdio.h>
int main (){
    int i,num,org_number,rev=0,res;
    printf("Enter Any Number:- ");
    scanf("%d",&num);
    org_number=num;
    while(num>0){
res=num%10;
rev=rev*10+res;
num/=10;
    }
    if(rev==org_number){
        printf("%d is palindrome",org_number);
    }
else{
    printf("%d is not palindrome",org_number);
}
}