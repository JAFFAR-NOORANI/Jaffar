// 12.Write a program in C to find the number of times a given word 'is' appears in
// the given string.

#include <stdio.h>
#include <string.h>
int main()
{
    int ctr=0,j,max=0; 
    int i,s,spc;
    char str[100]; 

    printf("\nFind the number of times the word 'IS' in any combination appears :\n");

    printf("Input the string : ");
    fgets(str,sizeof str,stdin);
    ctr=strlen(str); 

    for (j=0;j<=ctr-2;j++) 
    {
        i=(str[i]=='i' || str[i]=='I');
        s=(str[i+1]=='s' || str[i+1]=='S');
        spc=(str[i+2]==' ' || str[i+2]=='\0');

        if ((i && s && spc) == 1)
        {
            max++;
        }
    }

    printf("The frequency of the word \'IS\' is : %d\n\n", max); 
}
