// 11.Write a program in C to read a sentence and replace lowercase characters with
// uppercase and vice versa.
 
 #include<stdio.h>
 #include<string.h>
 int main () {
    char str1[30],str2[30];
    printf("Enter Element for String 1: ");
    gets(str1);
    printf("Enter Element for String 2: ");
    gets(str2);

printf("\n String to lower case:%s",strlwr(str1));
printf("\n String to Upper Case:%s",strupr(str2));

 }