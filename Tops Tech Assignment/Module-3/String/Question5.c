// 5. Write a program in C to compare two strings without using string library
// functions.

#include <stdio.h>  
int compare(char[],char[]);  
int main()  
{  
   char str1[50]; 
   char str2[50];  
   printf("Enter the First String : ");  
   scanf("%s",str1);  
   printf("Enter the Second String : ");  
   scanf("%s",str2);  
   int c= compare(str1,str2);  
   if(c==0)  
   printf("Strings are Same");  
   else  
   printf("Strings are not Same");  
  

}  

int compare(char a[],char b[]) 
{  
    int temp=0,i=0;   
    while(a[i]!='\0' && b[i]!='\0')  
    {  
       if(a[i]!=b[i])  
       {  
           temp=1;  
           break;  
       }  
       i++;  
    }  
   
}