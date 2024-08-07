// 29. Convert minutes into seconds and hours

#include<stdio.h>
int main () {
    float min,hrs;
    int sec;
    printf(" Enter Number of Minutes : ");
    scanf("%f",&min);
    sec=min*60;
    hrs=min/60;
    printf("Number of Seconds = %d",sec);
   printf("\n Number Of Hours =%f",hrs);
}