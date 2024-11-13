// 1. Write a program in C to find the length of a string without using library
// functions.

#include<stdio.h>
int main (){
char str[20];
int len=0;
printf("Enter String: ");
gets(str);
for(int i=0;str[i];i++){
    len++;
}
printf("Lenght of String is %d",len);
}