// string length without using in-built function 

#include<stdio.h>
int main (){
char str[20];
int len=0;
printf("Enter String: ");
gets(str);
for(int i=0;str[i];i++){
    len++;
}
printf("Lenght of String is %d",len);
}