#include <stdio.h>
#include <math.h>

int main() {
    int N;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &N);

    // Calculate the powers
    int N1 = pow(N, 1);
    int N2 = pow(N, 2);
    int N3 = pow(N, 3);

    // Print the results
    printf("The first three powers of %d are:\n", N);
    printf("\n %d^1 = %d", N, N1);
    printf("\n %d^2 = %d", N, N2);
    printf("\n %d^3 = %d", N, N3);

    return 0;
}
