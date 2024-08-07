// 9. C Program to Check Uppercase or Lowercase or Digit or Special
// Character
// Upper Case = 65-90
// lower case = 97-122
// digit = 48-57
// special = else


#include <stdio.h> 
int main () {
    char ch;
    printf("Enter a character or number: ");
    scanf("%c", &ch);
    if (ch>= 'A' && ch<= 'Z'){
        printf("The character '%c' is uppercase",ch);
    }
else if (ch>= 'a' && ch<= 'z'){
    printf("The Character '%c' is lowwercase",ch);
}
else if (ch>= '0' && ch<= '9'){
    printf("The character '%c' is a digit",ch);
}
else {
    printf("The character '%c' is a special character",ch);
}
}