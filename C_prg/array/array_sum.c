//  program for array having different values and doing addition of this values.


// #include<stdio.h>
// int main (){
// int array[3];
// int sum=0,i;
// printf("Enter Number for Sum of Array:-  ");
// for (i=0;i<3;i++){
//     scanf("%d",&array[i]);
//     sum+=array[i];
// }
// printf("Sum of Array = %d",sum);
// }



#include<stdio.h>
int main (){
    int array[5];
    int sub=0,i;
    printf("Enter Elements:- ");
    for (i=0;i<5;i++){
        scanf("%d",&array[i]);
        sub-=array[i];
    }
printf("Sum Of Array is %d",sub);

}