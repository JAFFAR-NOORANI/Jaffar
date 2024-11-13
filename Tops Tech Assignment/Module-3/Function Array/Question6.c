// 6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
int main () {
int arr1[20][20],arr2[20][20],add[20][20],sub[20][20],mul[20][20];
int r,c,row,col;
printf("Enter Number of row:- ");
scanf("%d",&r);
printf("Enter Number of Coloum:- ");
scanf("%d",&c);

printf("Enter Element of Array 1:- ");
for (row=0;row<r;row++){
    for (col=0;col<c;col++){
scanf("%d",&arr1[row][col]);
    }
}
printf("Enter Element of Array 2:- ");
for (row=0;row<r;row++){
    for (col=0;col<c;col++){
scanf("%d",&arr2[row][col]);
    }
}
printf("Array 1:");
for(row=0;row<r;row++){
    printf("\n");
    for (col=0;col<c;col++){
  printf("%d ",arr1[row][col]);
    }
}
printf("\nArray 2:");
for(row=0;row<r;row++){
    printf("\n");
    for (col=0;col<c;col++){
  printf("%d ",arr2[row][col]);
    }
}
  // addition logic:
for(row=0;row<r;row++){
    for (col=0;col<c;col++){
        add[row][col]=arr1[row][col]+arr2[row][col];
    }
}
printf("\nAddition If Array 1 and Array 2 is");
for(row=0;row<r;row++){
    printf("\n"); 
    for (col=0;col<c;col++){
        printf("%d ",add[row][col]);
    }
}

 // subraction logic:
for(row=0;row<r;row++){
    for (col=0;col<c;col++){
        sub[row][col]=arr1[row][col]-arr2[row][col];
    }
}
printf("\nSubraction If Array 1 and Array 2 is");
for(row=0;row<r;row++){
    printf("\n"); 
    for (col=0;col<c;col++){
        printf("%d ",sub[row][col]);
    }
}
// Multiplication logic:
for (row=0;row<r;row++){
for (col=0;col<c;col++){
    mul[row][col]=0;
    for (int k=0;k<c;k++){
        mul[row][col]+=arr1[row][k]*arr2[k][col];
    }
}
}
printf("\nMultiplication If Array 1 and Array 2 is");
for(row=0;row<r;row++){
    printf("\n"); 
    for (col=0;col<c;col++){
        printf("%d ",mul[row][col]);
    }
}


}