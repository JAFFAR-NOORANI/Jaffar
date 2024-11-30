//multi-dimension array : In this array we have 3 size.
//syntax: data-type array_name [tablesize][row][col];


// #include<stdio.h>
// int main (){
// int arr[3][3][3]={
//     {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//     },
//     {
//         {11,12,13},
//         {14,15,16},
//         {17,18,19},
//     },
//     {
//         {21,22,23},
//         {24,25,26},
//         {27,28,29},

//     }
// };
// int row,col,table;
// printf("\nPrinting Array \n");
// for (table=0;table<3;table++){
//     printf("\n");
//     for (row=0;row<3;row++){
//         printf("\n");
//         for (col=0;col<3;col++){
//             printf("%d ",arr[table][row][col]);
//         }
//         }
//     }
// }

#include<stdio.h>

int main() {
    int arr[30][30][30];
    int t, r, c;
    int table, row, col;

    // Input number of tables, rows, and columns
    printf("Enter Number of Tables, Rows & Columns: ");
    scanf("%d %d %d", &t, &r, &c);

    // Input elements for the array
    printf("Enter elements for the array:\n");
    for (table = 0; table < t; table++) {
        for (row = 0; row < r; row++) {
            for (col = 0; col < c; col++) {
                printf("Enter element for table %d, row %d, col %d: ", table+1, row+1, col+1);
                scanf("%d", &arr[table][row][col]);
            }
        }
    }

    // Print the 3D array
    printf("\nPrinting Array:\n");
    for (table = 0; table < t; table++) {
        printf("\nTable %d:\n", table + 1);
        for (row = 0; row < r; row++) {
            for (col = 0; col < c; col++) {
                printf("%d ", arr[table][row][col]);
            }
            printf("\n");
        }
    }

    return 0;
}
