// 7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
int main (){
    char str[30];
    int len=0;
    printf("Enter String: ");
    gets(str);
    for (int i=0;str[i];i++){
        len++;
    }
printf("Length of String is %d",len);

}