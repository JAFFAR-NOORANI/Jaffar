// 5. WAP to take two Array input from user and sort them in ascending or
// descending order as per user’s choice


#include<stdio.h>
int main () {
    int arr1[5],arr2[5];
    int i,j,choice,temp;
    int choice1;
    printf("Enter 5 Element Of Array 1: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    // printf("Enter 5 Element of Array 2: ");
    // for(i=0;i<5;i++){
    //     scanf("%d",&arr2[i]);
    // }
    printf("Printing Array 1: \n");
    for (i=0;i<5;i++){
        printf("%d \t",arr1[i]);
    }
    // printf("\nPrinting Array 2: \n");
    // for (i=0;i<5;i++){
    //     printf("%d \t",arr2[i]);
    // }
    printf("\n Enter 1 for Array 1: ");
    printf("\n Enter 2 for Array 2: ");
    printf("Enter Choice: \n");
    scanf("%d",&choice);
switch (choice)
    {
    case 1:
    printf("\n Enter A for Ascending Order: ");
    printf("\n Enter D for Decending Order: ");
    printf("\n Enter Choice: \n");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1: //asending Order
       for(i=0; i<5; i++){
    for( j=i+1; j<5; j++){
        if(arr1[i] > arr1[j]){
           temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
        }
        }
       printf("\nPrinting array1 in ascending order:\n");
        for(i=0; i<5; i++){
         printf("%d ", arr1[i]);
        }

    }
        break;
    case 2: //desending Order
       for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        if(arr1[i] < arr1[j]){
            temp=arr1[j];
            arr1[j]=arr1[i];
            arr1[i]=temp;
        }
    }
    }
      printf("\nPrinting array in ascending order:\n");
for(i=0; i<5; i++){
    printf("%d ", arr1[i]);
}

    }
        break; 

    // case 2:
    // printf("\n Enter A (1)for Ascending Order: ");
    // printf("\n Enter D (2)for Decending Order: ");
    // printf("\n Enter Choice:");
    // scanf("%d",&choice1);
    // switch (choice1) {
    // case 1: //asending Order
    //    for(i=0; i<5; i++){
    //     for(int j=0; j<5; j++){
    //     if(arr1[i] > arr2[j]){
    //         temp=arr2[j];
    //         arr1[j]=arr2[i];
    //         arr1[i]=temp;
    //     }
    // }
    // }
    //     break;
    // case 2: //desending Order
    //    for(i=0; i<5; i++){
    // for(j=0; j<5; j++){
    //     if(arr1[i] < arr2[j]){
    //         temp=arr2[j];
    //         arr1[j]=arr2[i];
    //         arr1[i]=temp;
    //     }
    // }
    // }
    //     break;        
    
    // default:
    // printf("Invalid Choice");
    //     break;  
    // }
        
    
    }   
}