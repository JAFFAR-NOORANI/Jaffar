//function categories: 4 types 
// 1. no argument no return statements.
// 2. no argument with return statements.
// 3. with arguments no return statements.
// 4. with arguments with return statements.


// #include<stdio.h>
// void cube (){
//     int side,res;
//     printf("Please Enter Side of Cube:- ");
//     scanf("%d",&side);
//     res=side*side*side;
//     printf("Cube Of Given is %d",res);
// }   
// int main () {
//         cube();
// }

// no argument with return 
// #include<stdio.h>
// int sum(){
//     int a,b;
//     printf("Enter Number:- ");
//     scanf("%d %d",&a,&b);
//      return a+b;
// }
// int main (){
//    printf("Sum of (A + B) = %d",sum()); 
// }


//with arguments no return

// #include<stdio.h>
// int sub_fun(int a,int b){
//     int res=a-b;
// printf("Result = %d",res);
// }
// int sub_fun1(int a,int b){
//     int res=a*b;
// printf("Result = %d",res);
// }
// int sub_fun2(int a,int b){
//     int res=a/b;
// printf("Result = %d",res);
// }
// int main (){
//     int a,b;
//     printf("Enter Value of A & B:- ");
//     scanf("%d %d",&a,&b);
//     sub_fun1(a,b);
// }


// with argument with return
#include<stdio.h>
int sub1(int a,int b){
return a+b;
}
int sub2(int a,int b){
return a*b;
}
int main (){
    int a,b;
    printf("Enter Value of A & B:- ");
    scanf("%d %d",&a,&b);
    printf("Calling Function =%d",sub2(a,b));
    
    }