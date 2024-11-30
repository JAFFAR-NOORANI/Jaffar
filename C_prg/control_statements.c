// control statements : Continue,break,goto .

// #include<stdio.h>
// int main (){
//     int i,n;
//     for(i=1;i<=20;i++){
//         if(i==3 || i==7 || i==13){
//             continue;
//         }
//         else{
//             printf("%d\n",i);
//         }
//     }
// }


//using break statements;

#include<stdio.h>
int main (){
    int i;
    for(i=1;i<=10;i++){
        if(i==8){
            break;
        }
    else {
        printf("%d \t",i);
    }
    }
}