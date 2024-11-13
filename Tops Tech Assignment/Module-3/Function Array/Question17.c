// 17.WAP to show difference between Structure and Union.


#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    struct student st[2];
    int i;
    for(i=0;i<2;i++){
        printf("enter rollno:");
        scanf("%d",&st[i].rollno);
        printf("Enter name:");
        scanf("%s",&st[i].name);
        printf("Enter marks: ");
        scanf("%f",&st[i].marks);
    }
    printf("\n student details\n");
    for(i=0;i<2;i++){
        printf("\n Student no=%d",i);
        printf("\n Rollno:%d",st[i].rollno);
        printf("\n Name:%s",st[i].name);
        printf("\n marks:%f",st[i].marks);
    }
}


#include<stdio.h>
union student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    union student st[2];
    int i;
    for(i=0;i<2;i++){
        printf("enter rollno:");
        scanf("%d",&st[i].rollno);
        printf("Enter name:");
        scanf("%s",&st[i].name);
        printf("Enter marks: ");
        scanf("%f",&st[i].marks);
    }
    printf("\n student details\n");
    for(i=0;i<2;i++){
        printf("\n Student no=%d",i);
        printf("\n Rollno:%d",st[i].rollno);
        printf("\n Name:%s",st[i].name);
        printf("\n marks:%f",st[i].marks);
    }
}