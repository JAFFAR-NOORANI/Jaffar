// 16.Write a C program to read temperature in centigrade and display a suitable
// message according to the temperature state below:
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot

#include<stdio.h>
int main(){
    float temp;
    printf("Enter the temperature in centigrade: ");
 scanf("%f",&temp);
if (temp<0){
    printf("Its Freezing weather ");
}
else if (temp>=0 && temp<10){
    printf("Its Very Cold weather ");
}
else if (temp<20 && temp>=9){
    printf("Its Cold weather ");
}
else if (temp<30 && temp>=20){
    printf("Its Normal weather ");
    }
    else if (temp<40 && temp>=30){
        printf("Its Hot weather ");
        }
else {
    printf("Its Very Hot weather ");
}
}