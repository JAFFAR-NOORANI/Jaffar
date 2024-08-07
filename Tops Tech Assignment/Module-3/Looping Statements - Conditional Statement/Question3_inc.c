// 3. WAP to take 10 no. Input from user find out below values
// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd numbers


#include <stdio.h>
int main()
{
    int i, num;
    int even = 0, odd = 0;
    int count=0;

    while (i < 5)
    {
       printf("Enter numbers:");
      scanf("%d", &num);
        if (num % 2 == 0)
        {
            even++;
            
        }
        else
        {
            odd++;
        }
        i++;
    }
    printf("\nOdd number is : %d", odd);
    printf("\nEven number is : %d", even);
}