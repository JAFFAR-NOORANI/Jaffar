// 3. WAP to find reverse of string using recursion

#include<stdio.h>
int rev_str(){
    char ch;
    scanf("%c",&ch);
    if (ch!='\n'){
        rev_str();
    }
    printf("%c",ch);
}

int main (){
    printf("Enter String: ");
    rev_str();

}



