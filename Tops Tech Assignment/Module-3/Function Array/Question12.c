// 12.WAP to accept 5 students name and store it in array 

#include<stdio.h>
int main (){
    char arr[5][20];
    int i;
printf("Enter 5 Student Names:- ");
for (i=0;i<5;i++){
    scanf("%s",arr[i]);
}
printf("Printing Student Names: ");
for (i=0;i<5;i++){
 printf("%s \n",arr[i]);
}
}