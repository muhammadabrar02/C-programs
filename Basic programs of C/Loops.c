#include <stdio.h>

int main() {
    int i;

    // Using a for loop to print numbers from 1 to 5
    printf("Using a for loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a while loop to print numbers from 1 to 5
    printf("Using a while loop:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
