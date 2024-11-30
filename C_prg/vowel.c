#include<stdio.h>
int main () {
    char ch;
    printf("Please Enter Character : ");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'A' :
        case 'a' :
        printf("A is vowel.");
        break;
        case 'E' :
        case 'e' :
printf("E is vowel,");
break;
case 'I' :
case 'i' :
printf("I is vowel.");
break;
case 'O' :
case 'o' :
printf("O is vowel.");
break;
case 'U' :
case 'u' :
printf("U is vowel.");
break;

default:
printf("Its a Consonant");
break;
    }
    }