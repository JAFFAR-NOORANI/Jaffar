// 19.Patterns:

// A
// B C
// D E F 
// G H I J
// K L M N O


#include<stdio.h>
int main(){
    int row,col;
    int ch;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            printf("%c ",ch+65);
            ch++;
        }
        printf("\n");
    }
}
