//  strings: they are group of characters.

#include<stdio.h>
int main (){
    char string[]="Welcome to the world of coding.",string1[20];
    printf("string is %s",string);
    printf("\nEnter atring 2:- ");
    // scanf("%[^\n]s",&string1); 
    gets(string1);
    printf("\n string 2 is = %s",string1);
} 