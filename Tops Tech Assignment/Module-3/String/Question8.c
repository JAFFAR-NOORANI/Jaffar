// 8. Write a program in C to count the total number of vowels or consonants in a
// string.

/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main () {
    char str[30];
    int i;
    int vowel=0,cons=0;
    printf("Enter String: ");
    gets("str");
    for (i=0;i<strlen(str);i++){
        char ch=tolower(str[i]);
        if (ch > 'a' && ch < 'z' ){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel++;
            }
        else {
            cons++;
        }
        }

    }
    printf("Vowels: %d\nConsonants: %d\n", vowel, cons);
}
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100]; 
    int i,len,vowel=0,cons=0; 

    printf("\nCount total number of vowel or consonant :\n");
    printf("******************************************\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin); 
    len = strlen(str); 

    for (i=0;i<len;i++) 
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        {
            vowel++; 
        }
        // Check if the character is an alphabet (both lowercase and uppercase)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            cons++; // Increment the consonant count if the character is an alphabet but not a vowel
        }
        
    }

    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);
	
}