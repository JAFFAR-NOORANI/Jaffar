// 9. Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
#include<string.h>
int main (){
    char str[50];
    int i,j;
    int count = 0;
    int maxcount=0;
    char maxchar;
    printf("Enter String: ");
    gets(str);
    for (i=0;str[i];i++){
        count =0;
        for (j=0;str[j];j++){
            if (str[i]==str[j]){
                count++;
            }
        }
    if (maxcount<count){
        maxcount=count;
        maxchar=str[i];
    }
    }
printf("The Character '%c' has been repeated maxium time of %d times",maxchar,maxcount);

}