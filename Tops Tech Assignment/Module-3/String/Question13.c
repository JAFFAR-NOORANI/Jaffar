// 13.Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
int main() {
   char str[150];
   
   printf("Enter a string: ");
   fgets(str,sizeof str,stdin); 

   for (int i=0,j;str[i]!='\0';i++) 
   {
      while (!(str[i]>='a' &&str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]=='\0')) 
      {
         for (j=i;str[j]!='\0';j++) 
         {
            str[j]=str[j+1];
         }
         str[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(str);
}