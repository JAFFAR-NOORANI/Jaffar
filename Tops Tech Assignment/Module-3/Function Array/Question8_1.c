
// Write a program of 
// structure employee that provides the following

// a. information -print and display empno, empname, address and age

// b. Write a program of structure for five employee that provides the following information -print and display
//  empno, empname, address and age

#include<stdio.h>
struct employee
{
    int emp_number,emp_age;
    char emp_name[50],emp_add[50];

};
int main (){
    struct employee emp[5];
    int i;
    for (i=0;i<5;i++){
        printf("Enter Employee Number: ");
        scanf("%d",&emp[i].emp_number);
         printf("Enter Employee Name: ");
        scanf("%s",&emp[i].emp_name);
         printf("Enter Employee Address: ");
        scanf("%s",&emp[i].emp_add);
        printf("Enter Employee Age: ");
        scanf("%d",&emp[i].emp_age);
    }
    printf("\nEmployee Details: ");
    for(i=0;i<5;i++){
        printf("\nEmployee Number: %d",emp[i].emp_number);
        printf("\nEmployee Number: %s",emp[i].emp_name);
        printf("\nEmployee Number: %s",emp[i].emp_add);
         printf("\nEmployee Number: %d",emp[i].emp_age);
         printf("\n");
    }
}
