// dynamic array: to take the input of array elements from the user.

#include<stdio.h>
int main () {
    int array[5];
    int i;
printf("Enter Number of Element:- ");
for(i=0;i<5;i++){
    scanf("%d",&array[i]);
}
printf("Printing Array \n");
for(i=0;i<5;i++){
    printf("Array of [%d] is %d \n",i,array[i]);
}

}