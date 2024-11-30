#include<stdio.h>
int main(){
    int A,B,C;
    printf("Enter A And B:");
    scanf("%d %d",&A,&B);
    printf("\n A=%d",A);
    printf("\n B=%d",B);
    C= (A>B) && (A!=0) ;
    printf("\n Logical and=%d",C);
    C= (A<B) || (B==0);
    printf("\n Logical OR=%d",C);
}