//reverse number: 6325=5236

// #include<stdio.h>
// int main (){
//     int num,rev=0,rem;
//     printf("Please Enter Any Number : ");
//     scanf("%d",&num);
//     while(num!=0){
//         rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
//     }
//     printf("Reverse=%d",rev);
// }


#include<stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Please Enter Any Number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Reverse = 0\n");
        return 0;
    }

    while(num!= 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reverse = %d\n", rev);
}