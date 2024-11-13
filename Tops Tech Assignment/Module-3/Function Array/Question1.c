// 1. Write a program to find out the max number from given array using function

#include<stdio.h>
int main (){
    int array[5];
    int i;
    int max=0;
    printf("Enter Element of Array:- ");
    for(i=0;i<5;i++){
    scanf("%d",&array[i]);
    }
    printf("Printing Array\n");
    for (i=0;i<5;i++){
        printf("%d \t",array[i]);
    }
for(i=0;i<5;i++){
    if (array[i] > max){
        max = array[i];
    }
}

printf("\nThe maximum number in the array is: %d\n", max);

    }
