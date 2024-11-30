// goto statements:
// label:
// //statements

// logical statements;
// goto label;

#include<stdio.h>
int main(){
   int num1;

   label1:
   printf("\n Please enter 1 to exit : ");
   scanf("%d",&num1);

   if(num1 !=1){
    printf("\n You entered %d Please enter 1 to exit",num1);
    goto label1;
   }
   else {
    printf("End Of Program");
   }
}                                                           