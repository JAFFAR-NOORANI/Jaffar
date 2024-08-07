// 26 . b -- ii. Vowel or Consonant using switch case

#include<stdio.h>
int main() {
    char ch;
    printf("Pleaae Enter Character : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' :
        case 'A' :
        printf("Character A is Vowel");
        break;
        case 'e' :
        case 'E' :
        printf("Character E is Vowel");
        break;
        case 'i' :
        case 'I' :
        printf("Character I is Vowel");
        break;
        case 'o' :
        case 'O' :
        printf("Character O is Vowel");
        break;
        case 'u' :
        case 'U' :
        printf("Character U is Vowel");
        break;
        default :
        printf("Character is Consonant");
        break;
    }
    }
