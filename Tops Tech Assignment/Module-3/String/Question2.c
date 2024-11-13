// 2. Write a program in C to separate individual characters from a string.


#include<stdio.h>
int main (){
    char name[20];
    int i;
    printf("Enter Name: ");
    gets(name);
    for (i=0;name[i];i++){
        printf("%c\t",name[i]);
    }

}