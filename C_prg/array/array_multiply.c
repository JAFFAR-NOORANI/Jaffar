// array operation : making multiplication for 2 2d array.

#include<stdio.h>
int main (){
int arr1[20][20],arr2[20][20],mul[20][20];
int row,col,r,c;
printf("Enter Number of Row:- ");
scanf("%d",&r);
printf("Enter Number of Col:- ");
scanf("%d",&c);

printf("\nEnter Element of Array-1:- ");
for(row=0;row<r;row++){
    for (col=0;col<c;col++){
        scanf("%d",&arr1[row][col]);
    }
}

printf("\nEnter Element of Array-2:- ");
for (row=0;row<r;row++){
    for (col=0;col<c;col++){
scanf("%d",&arr2[row][col]);
    }
}

printf("\n Printing Array-1");
for (row=0;row<r;row++){
      printf("\n");
    for (col=0;col<c;col++){
printf("%d ",arr1[row][col]);
    }
}

printf("\n Printing Array-2");
for (row=0;row<r;row++){
      printf("\n");
    for (col=0;col<c;col++){
printf("%d ",arr2[row][col]);
    }
}
//  multiplication logic:
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        mul[row][col]=0;
        for(int k=0;k<c;k++){
            mul[row][col]+=arr1[row][k]*arr2[k][col];
        }
}
}
printf("\n Multipilication \n");
for (row=0;row<r;row++){
    printf("\n");
    for (col=0;col<c;col++){
printf("%d ",mul[row][col] );
    }

}

}