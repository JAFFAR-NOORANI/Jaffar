// 7. Accept marks from user and check pass or fail

#include<stdio.h>
int main(){
    int marks;
   label1:
    printf("\nEnter your marks : ");
    scanf("%d",&marks);
    
    if(marks>100){
        printf("You have Entered Invalid Marks");
        goto label1;
    }

    else if(marks>80 && marks <=100){
        printf("You are pass with Grade A");
    }
    else if (marks>60 && marks <=80){
        printf("You are pass with Grade B");
    }
    else if (marks>40 && marks <=60){
        printf("You are pass with Grade C");
    }
    else if (marks>100){
        printf("You Entered Invalid Marks");
        printf("\nPlease Enter Valid Marks : ");
         scanf("%d",&marks);
    }
    else {
        printf("Sorry, You have failed");
    }
}