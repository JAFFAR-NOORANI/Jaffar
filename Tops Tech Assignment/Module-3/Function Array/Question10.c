// 10.WAP to perform Palindrome number using for loop and function

#include <stdio.h>


int is_palindrome(int num) {
    int og_num = num;
    int rev = 0, rem;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (rev == og_num) {
        return 1; // It is a palindrome
    } else {
        return 0; // It is not a palindrome
    }
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (is_palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

}
