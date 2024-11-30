/*
string function: for using string function we have to include string .h header file
1. string length: strlen();
2. string lower: strlwr();
3. string upper: strupr();
4. string copy: strcpy(destination,source);
5. string concatenate: strcat();
6.string compare:strcmp();
        if both the string are same: 0
        if str1>str2 =1
        if str1<str2=-1
7.string set: strset();
8. string inside string : strstr(str,"another string");
9. string character: strchr(str,'character');
*/

#include<stdio.h>
#include<string.h>
int main () {
    char str1[20],str2[20],str3[]="Zaid is name ";
    printf("Enter String 1:- ");
    gets(str1);
    printf("Enter String 2:- ");
    gets(str2);



// String Lenght --- function is strlen
    /*int len1=strlen(str1),len2=strlen(str2);
    printf("lenght of String 1 is =%d",len1);
    printf("\nlenght of String 1 is =%d",len2);
*/

//  string to lower and upper case
/*  printf("String to Lower case = %s",strlwr(str1));
//  printf("\nString to UPPER case = %s",strupr(str2));
*/

 // string copy - 
 /*
 printf("String Copy 1 to to 2 : %s",strcpy(str3,str2));
 printf("\nString Copy 2 to to 1 : %s",strcpy(str3,str1));
*/

// string concate
// printf("String Concate:%s ",strcat(str3, str2));

 // string reverse
//  printf("String Reverse :%s",strrev(str3));


}