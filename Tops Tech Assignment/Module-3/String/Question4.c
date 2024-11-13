// 4. Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
int main () {
char str[100];
int i=0;
int word=1;
printf("Enter String: ");
gets(str);
while (str[i]!='\0'){
    if (str[i]==' ')
    word++;
    i++;
}
printf("Total %d number of words in a String. ",word);

}

