// 8. WAP to accept the height of a person in centimeters and categorize the
// person according to their height.

#include<stdio.h>
int main (){
    int height;
    printf("Enter the height of a person in centimeters: ");
    scanf("%d", &height);
    if (height >=230){
        printf("Man You Are Gaint");
    }
    else if (height >180 && height <230){
       printf("You are tall");
    }
    else if (height >=153 && height <179){
        printf("You are average");
    }
    else if (height >=138 && height <152){
        printf("You are short");
}
else {
    printf("You Seriously need to see the doctor ");
}
}