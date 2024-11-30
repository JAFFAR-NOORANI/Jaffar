// array operation : making summation ,subtraction,multiplication for 2 2d array.

#include<stdio.h>
int main (){
int  arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],div[20][20];
int  row,col,r,c;
printf("Enter number of Rows:- ");
scanf("%d",&r);
printf("Enter number of Coloums:- ");
scanf("%d",&c);


printf("Please Enter Array-1 Element:- ");
for(row=0;row<r;row++){
    for (col=0;col<c;col++){
        scanf("%d",&arr1[row][col]);
    }
}

printf("Please Enter Array-2 Element:- ");
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        scanf("%d",&arr2[row][col]);
    }
}

printf("\n\nPrinting Array-1\n");
for (row=0;row<r;row++){
    printf("\n ");
    for (col=0;col<c;col++)
    printf("%d ",arr1[row][col]);
}
printf("\n\nPrinting Array-2\n");
for(row=0;row<r;row++){
    printf("\n");
    for (col=0;col<c;col++){
        printf("%d ",arr2[row][col]);
    }
}
  // addition logic:
  for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        sum[row][col]=arr1[row][col]+arr2[row][col];
    }
  }
printf("\n\n Addition \n");
 for(row=0;row<r;row++){
    printf("\n ");
    for(col=0;col<c;col++){
        printf("%d ",sum[row][col]);
    }
    }

 // Subraction logic:

for(row=0;row<=r;row++){
    for (col=0;col<=c;col++){
sub[row][col]=arr1[row][col]-arr2[row][col];
    }
}
printf("\n\n Subraction \n");
for (row=0;row<r;row++){
    printf("\n ");
    for (col=0;col<c;col++){
        printf("%d ",sub[row][col]);
    }
}
// Multipplication logic
for(row=0;row<r;row++){
    for (col=0;col<c;col++){
        div[row][col]=arr1[row][col]/arr2[row][col];
    }
}
printf("\n\n Divition \n");
for (row=0;row<r;row++){
    printf("\n");
    for (col=0;col<c;col++){
        printf("%d ",div[row][col]);
    }
}

}