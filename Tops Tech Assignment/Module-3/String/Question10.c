// 10.Write a program in C to extract a substring from a given string


#include <stdio.h>
#include <string.h>

void substring(char *source, char *destination, int start, int length) {
    for (int i = 0; i < length && (start + i) < strlen(source); i++) {
        destination[i] = source[start + i];
    }
    destination[length] = '\0';
}

int main() {
    char source[100], destination[100];
    int start, length;

   
    printf("Enter the Main string: ");
    fgets(source, sizeof(source), stdin);

    size_t ln = strlen(source) - 1;
    if (source[ln] == '\n') source[ln] = '\0';

    printf("Enter the start position: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    substring(source, destination, start, length);

    printf("Extracted substring: %s\n", destination);

}