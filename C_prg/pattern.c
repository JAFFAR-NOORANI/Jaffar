// pattern 1:-
//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5

// #include<stdio.h>
// int main() {
//     int row,col,space;

//     for(row=1;row<=5;row++){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%d ",col);
//         }
//         printf("\n");
//     }
// }


// pattern 2:
//        A
//      A B
//    A B C
//  A B C D
//A B C D E

// #include<stdio.h>
// int main() {
//     int row,col,space;
// for(row=1;row<=5;row++){
//     for(space=5-1;space>=row;space--){
//         printf("  ");
//     }
//     for(col=1;col<=row;col++){
//         printf(" %c",col+64);
//     }
// printf("\n");
//     }
// }

// pattern 3
//         E
//       D E
//     C D E
//   B C D E 
// A B C D E

#include<stdio.h>
int main() {
    int row,col,space;
for(row=5;row>=1;row--){
    for(space=row;space>1;space--){
        printf("  ");
    }
    for(col=row;col<=5;col++){
        printf(" %c",col+64);
    }
printf("\n");
    }
}