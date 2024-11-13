// 14.Write a program in C to combine two strings manually

#include <stdio.h>
int main() 
{
  char s1[100]="I am",s2[]=" Awesome";
  int length, j;
  length=0;

  printf("\nString-1: ");
  puts(s1);
  printf("\nString-2: ");
  puts(s2);
  while(s1[length]!='\0') 
  {
    length++;
  }

  for (j=0;s2[j]!='\0';j++,length++) 
  {
    s1[length]=s2[j];
  }

  s1[length]='\0';

  printf("\nAfter concatenation: \n");
  puts(s1);

}