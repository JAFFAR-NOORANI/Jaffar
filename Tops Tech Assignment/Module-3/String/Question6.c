// 6. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){

    char str[30];
    int i;
    int alpha=0,digit=0,special=0;
    printf("Enter String:");
    gets(str);
    for (i=0;i<str[i];i++){
        if (isalpha(str[i])){
            alpha++;
        } else if (isdigit(str[i])){
            digit++;
        } else if (ispunct(str[i]) || isspace(str[i])){
            special++;
        }
    }
    printf("Total Number of Alphabets are : %d",alpha);
    printf("\nTotal Number of Digits are : %d",digit);
    printf("\nTotoal Number of Special Charater are : %d",special);
}



