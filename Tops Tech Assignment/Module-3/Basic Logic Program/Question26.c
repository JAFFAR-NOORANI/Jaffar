// 26. Convert temperature Fahrenheit to Celsius

#include<stdio.h>
int main() {
    float f,c,res;
  printf("Enter Temperature Fahrenheit : ") ;
  scanf("%f",&f);
  c = (f - 32 ) *5 /9;
  printf("Temperature Celsius : %f",c);

}