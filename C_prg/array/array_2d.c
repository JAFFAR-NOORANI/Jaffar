//array 2d taken value from user

#include<stdio.h>
int main () {
    int arr[3][3];
    int row,col;
    printf("Enter Values of Array:- ");
    for (row=0;row<3;row++){
        for (col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
printf("\nPrinting Array\n");
for (row=0;row<3;row++){
    printf("\n ");
    for (col=0;col<3;col++){
        printf("%d ",arr[row][col]);
    }
}


}
