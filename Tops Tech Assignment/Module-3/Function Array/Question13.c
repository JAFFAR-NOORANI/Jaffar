// 13.WAP to accept 5 numbers from user and check entered number is even or odd
// using of array 

#include<stdio.h>
int main () {
  int arr[5];
  int i;
  printf("Enter Array Element: ");
  for (i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
printf("Printing Array: ");
for (i=0;i<5;i++){
    printf("%d  ",arr[i]);
}
printf("\nPrintinf Even Odd from Array:");
for (i=0;i<5;i++){
    if (arr[i]%2 ==0){
    printf("\n%d is Even",arr[i]);
    }

    else {
    printf("\n%d is Odd",arr[i]);
}
}
}