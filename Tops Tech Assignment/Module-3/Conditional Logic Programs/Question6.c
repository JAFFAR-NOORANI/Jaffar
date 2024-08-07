// 6. Find the Character Is Vowel or Not

#include<stdio.h>
int main (){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    switch (ch){
        case 'a' :
        case 'A' :
        printf("A is Vowel");
        break;
        case 'e' :
        case 'E' :
        printf("E is Vowel");
        break;
        case 'i' :
        case 'I' :
        printf("I is Vowel");
        break;
        case 'o' :
        case 'O' :
        printf("O is Vowel");
        break;
        case 'u' :
        case 'U' :
        printf("U is Vowel");
        break;
        default:
        printf("Given Charatcer '%c' not a Vowel",ch);
    }
   }