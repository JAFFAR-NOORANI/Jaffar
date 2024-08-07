    // 28. Convert years into days and months

    #include<stdio.h>
    int main () {
        int y,m,d,dm,res;
        printf("Enter the Number of years: ");
        scanf("%d", &y);
        m = y * 12;
        d = m % 30;
      //  printf("Number of Months :%d",m);
      //  printf("\n Number of Days :%d",d);
    printf("Number of %d=%dmonth and %d days",y,m,d);
    }