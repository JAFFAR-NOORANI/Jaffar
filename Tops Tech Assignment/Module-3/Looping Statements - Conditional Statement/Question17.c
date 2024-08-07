// 17.Calculate 5 numbers from user and calculate number of even and odd using
// of while loop

#include <stdio.h>
int main()
{
    int i, num;
    int even = 0, odd = 0;

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