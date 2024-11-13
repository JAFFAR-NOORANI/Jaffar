// 3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
#include<string.h>
int main (){
char str[30],str1[30];
int i,len=0;
printf("Enter Element for String: ");
gets(str);

 printf("\nString reverse: %s\n",strrev(str));
 strcpy(str1, str);
printf("Printing individual characters of a string in reverse order; \n");
for (i=0;str1[i];i++){
        printf("%c\t",str1[i]);
    }
}

