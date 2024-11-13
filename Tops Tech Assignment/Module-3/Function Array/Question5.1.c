#include <stdio.h>

void sortAscending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[5], arr2[5];
    int i, choice;
    char sortChoice;

    // Input elements for Array 1
    printf("Enter 5 elements of Array 1: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for Array 2
    printf("Enter 5 elements of Array 2: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Print Array 1
    printf("Array 1: \n");
    printArray(arr1, 5);

    // Print Array 2
    printf("Array 2: \n");
    printArray(arr2, 5);

    // Ask user for choice of array
    printf("Enter 1 to sort Array 1 or 2 to sort Array 2: ");
    scanf("%d", &choice);

    // Ask user for choice of sorting order
    printf("Enter A for Ascending Order or D for Descending Order: ");
    scanf(" %c", &sortChoice); // Notice the space before %c

    // Sort the chosen array based on user's choice
    switch (choice) {
        case 1:
            if (sortChoice == 'A' || sortChoice == 'a') {
                sortAscending(arr1, 5);
            } else if (sortChoice == 'D' || sortChoice == 'd') {
                sortDescending(arr1, 5);
            } else {
                printf("Invalid sorting choice.\n");
                return 1; // Exit with error code
            }

            // Print sorted Array 1
            printf("Sorted Array 1: \n");
            printArray(arr1, 5);
            break;

        case 2:
            if (sortChoice == 'A' || sortChoice == 'a') {
                sortAscending(arr2, 5);
            } else if (sortChoice == 'D' || sortChoice == 'd') {
                sortDescending(arr2, 5);
            } else {
                printf("Invalid sorting choice.\n");
                return 1; // Exit with error code
            }

            // Print sorted Array 2
            printf("Sorted Array 2: \n");
            printArray(arr2, 5);
            break;

        default:
            printf("Invalid array choice.\n");
            return 1; // Exit with error code
    }

    return 0; // Exit successfully
}
