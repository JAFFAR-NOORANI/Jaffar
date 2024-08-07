// 26. WAP to show
// i. Monday to Sunday using switch case
// ii. Vowel or Consonant using switch case

#include<stdio.h>
int main (){
    int day;
    label1:
    printf("\nEnter the day number: ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid day ");
        goto label1;
        break;
        }
}