// Write a program to make multiplication of 2-D Matrix

#include<stdio.h>
int main (){
int row,col,r,c;
int arr[20][20],arr2[20][20],mul[20][20];
printf("Enter number of rows:- ");
scanf("%d",&r);
printf("Enter number of Col:- ");
scanf("%d",&c);

printf("Enter Number of Array 1 :- ");
for(row=0;row<r;row++){
  for(col=0;col<c;col++){
  scanf("%d",&arr[row][col]);
}
}

printf("Enter Number of Array 2:- ");
for(row=0;row<r;row++){
  for(col=0;col<c;col++){
  scanf("%d",&arr2[row][col]);
}
}

//printing array1
printf("\n \nArray1\n");
for(row=0;row<r;row++){
    printf("\n");
for (col=0;col<c;col++){
    printf("%d ", arr[row][col]);
}
}
//printing array2
printf("\n \nArray2\n");
for(row=0;row<r;row++){
    printf("\n ");
for (col=0;col<c;col++){
    printf("%d ", arr2[row][col]);
}
}

// multiplication logic
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        mul[row][col]=0;
        for(int k=0;k<c;k++){
            mul[row][col]+=arr[row][k]*arr2[k][col];
        }
    }
}

printf("\n Multiplication \n");
for(row=0;row<r;row++){
    printf("\n");
    for(col=0;col<c;col++){
        printf("%d ",mul[row][col]);
    }
}

}