// array transpose :- 
/*1 2 3
4 5 6
7 8 9
transpose:
1 4 7
2 5 8
3 6 9
*/

#include<stdio.h>
int main (){
    int arr1[3][3],arr2[3][3];
    int row,col;
    printf("Enter Element Of Array:- ");
    for (row=0;row<3;row++){
for (col=0;col<3;col++){
    scanf("%d",&arr1[row][col]);
}
    }
printf("\nPrinting Array");
for(row=0;row<3;row++){
    printf("\n");
    for (col=0;col<3;col++){
        printf("%d ",arr1[row][col]);
    }
}
//transpose logic:
for(row=0;row<3;row++){
for(col=0;col<3;col++){
    arr2[row][col]=arr1[col][row];
}
}
printf("\n\nPrinting Transpose Array");
for(row=0;row<3;row++){
    printf("\n ");
    for(col=0;col<3;col++){
        printf("%d ",arr2[row][col]);
    }
}

}