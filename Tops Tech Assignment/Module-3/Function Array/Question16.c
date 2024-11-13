// 16.Accept 5 numbers from user and perform sum of array

#include<stdio.h>
int main () {
int arr[5],sum=0;
int i;
printf("Enter Array Element: ");
for (i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("Printing Array: \n");
for (i=0;i<5;i++){
    printf("%d   ",arr[i]);
}
printf("\nAddition Of Array: \n");
for (i=0;i<5;i++){
    sum+=arr[i];
}
printf("%d",sum);
}