// 7. Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>
int main (){
    char str1[30],str2[30],str3[30];
    int i;
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
    printf("\n string 1 :%s",strcpy(str3,str2));
    printf("\n string 2: %s",strcpy(str3,str1));
    printf("\n string 3: %s",strcat(str1, str2)); // string concatane

}