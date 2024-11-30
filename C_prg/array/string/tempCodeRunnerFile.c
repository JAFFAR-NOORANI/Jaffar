
#include<stdio.h>
#include<string.h>
int main () {
    char str1[20],str2[20],str3[]="Zaid is name";
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
printf("String Concate: %s ",strcat(str3,str2));

}