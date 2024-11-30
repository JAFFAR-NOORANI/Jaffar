//  string palindrome

#include<stdio.h>
#include<string.h>
int main (){
char str[30];
printf("Enter String: ");
gets(str);
printf("String is :%s",str);
int len=strlen(str);
int i=0;
int temp=0;
while(i<len/2){
    if (str[i]!=str[len-i-1]){
        temp=1;
        break;
    }
    i++;
}
if (temp==1){
    printf("\nIts not a palidrome");
}
else {
    printf("\nIts a palidrome");
}
}