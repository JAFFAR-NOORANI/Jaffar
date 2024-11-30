//program to check grade

#include<stdio.h>
int main (){
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);
    if(marks>80 && marks <=100){
        printf ("Grade=A");
    }
else if (marks> 70 && marks <=80){
    printf ("Grade=B");
}
else if (marks> 50 && marks <=70){
    printf ("Grade=C");
}
else if (marks> 35 && marks <=50){
    printf ("Grade=D");
}
else {
    printf ("Fail");
}
}
