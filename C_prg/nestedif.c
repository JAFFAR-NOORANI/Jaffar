// nested if : if inside if
// program to check weather male and female is eligible for marriage or not.

#include<stdio.h>
int main (){
    int age;
    char choice;
    printf("Enter choice:(M for male & F for Female ) : ");
    scanf("%c",&choice);
    if(choice=='M' || choice=='m'){
        printf("Enter age : ");
        scanf("%d",&age);
        if(age>=21){
            printf("Male is Eligible For Marriage");
        }
    else{
        printf("Male is not Eligible For Marriage");
    }
    }
    else if(choice=='F' || choice=='f'){
        printf("Enter age : ");
        scanf("%d",&age);
        if(age>=18){
            printf("Female is Eligible For Marriage"); 
            }
            else{ 
                printf("Female is not Eligible For Marriage");
            }
    }
    else{
        printf("Invalid Choice");
    }
}