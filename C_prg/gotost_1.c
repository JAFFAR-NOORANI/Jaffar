// goto statements:
// label:
// //statements

// logical statements;
// goto label;

#include<stdio.h>
int main(){
    int num;

    label1:
    printf("\n Enter number(Press 2 for exit):");
    scanf("%d",&num);

    if(num!=1){
        printf("\n You enter  %d",num);
        goto label1;
    }
    else{
        printf("End of program");
    }
    
}