// array sorting in ascending

#include<stdio.h>
int main (){
    int arr[5];
    int i,j,temp;
    printf("Enter Element:- ");
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Printing Array \n");
    for (i=0;i<5;i++){
        printf("Array [%d] is %d \t ",i,arr[i]);
    }
// ascending logic
for (i=0;i<5;i++){
    for(j=0;j<5;j++){
        if (arr[i]<arr[j]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
printf("\n Ascending Array\n");
for (i=0;i<5;i++){
printf("%d \t",arr[i]);
}

}