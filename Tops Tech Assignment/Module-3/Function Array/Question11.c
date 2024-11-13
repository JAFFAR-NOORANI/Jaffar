// 11.WAP to accept 5 numbers from user and display in reverse order using for
// loop and array 
#include<stdio.h>
int main () {
int arr[5];
int i;
printf("Enter Array Element: ");
for (i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("Printing Array: ");
for(i=0;i<5;i++){
printf("%d   ",arr[i]);
}
 printf("\nPrinting Array in Reverse Order: ");
 for (i=4;i>=0;i--){
    printf("%d   ",arr[i]);
 }



}