// 14.Perform 2D matrix array 

#include<stdio.h>
int main (){
int arr1[20][20],arr2[20][20];
int row,col,r,c;
printf("Enter Numbers of Rows & Coloumn: ");
scanf("%d %d",&r,&c);

printf("Enter Elemnet of Array 1: ");
for (row=0;row<r;row++){
    for (col=0;col<c;col++){
        scanf("%d",&arr1[row][col]);
    }
}

printf("Enter Elemnet of Array 2: ");
for (row=0;row<r;row++){
    for (col=0;col<c;col++){
        scanf("%d",&arr2[row][col]);
    }
}

printf("\nPrinting Array 1:");
for (row=0;row<r;row++){
    printf("\n");
    for (col=0;col<c;col++){
        printf("%d  ",arr1[row][col]);
    }
}
printf("\nPrinting Array 2:");
for (row=0;row<r;row++){
    printf("\n");
    for (col=0;col<c;col++){
        printf("%d  ",arr2[row][col]);
    }
}


}


