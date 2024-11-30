// control statements : Continue,break,goto 
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i==5 || i==8){
        continue;
        }
        else{
        printf("%d \n ",i);
        }
    }
}

//using break statements;
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//         if(i==5){
//    break;
//         }
//         else{
//         printf("%d\n ",i);
//         }
//     }
// }