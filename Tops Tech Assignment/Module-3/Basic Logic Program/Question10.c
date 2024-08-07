// . find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main(){
    float w,l,h,wl,hl,hw,A;
    printf("Enter Value Of Width :");
    scanf("%f",&w);
    printf("Enter Value Of Length :");
    scanf("%f",&l);
    printf("Enter Value Of Height :");
    scanf("%f",&h);
    wl=w*l;
    printf("\n Value of wl = %f",wl);
    hl=h*l;
    printf("\n Value of wl = %f",hl);
    hw=h*w;
    printf("\n Value of wl = %f",hw);
    A=2*(wl+hl+hw);
    printf("\n Area of Rectangular Prism = %f",A);
}