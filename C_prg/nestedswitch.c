// nested swtich
//food menu

#include<stdio.h>
int main(){
int choice,ch;
printf("\n Select from menu :");
printf("\n 1. Pizza");
printf("\n 2. Burger");
printf("\n 3. Shawarma");
printf("\n 4. Cold Drink");
scanf("%d",&choice);
switch (choice){
case 1:    
printf("\n You have selected Pizza.");
printf("\n 1. Veg Pizza");
printf("\n 2. Non-Veg Pizza");
scanf("%d",&ch);
switch (ch){
case 1:
printf("\n Veg Pizza");
printf("\n 1. Margherita Pizza");
printf("\n 2. Veggie Pizza");
    break;
case 2:
printf("\n Non-Veg Pizza");
printf("\n 1. Chicken Pizza");
printf("\n 2. Chicken Tikka Pizza");
break;
default:
printf("\n Invalid Choice of Pizza.");
break;
}
} 
}   
