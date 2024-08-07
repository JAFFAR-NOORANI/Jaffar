//  Calculate person’s insurance premium based on salary

#include<stdio.h>
int main(){
    int s,pre;
    printf("Enter Monthly salary: ");
    scanf("%d", &s);
    pre= (s*12)*0.10;
    printf("\n persons Insurance Premium based on Annual salary sholud be :%d",pre);
}