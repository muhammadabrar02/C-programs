#include <stdio.h>

int main() {
    int n, i;
    float arr[100];

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    // Taking input from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
    }

    // Assume first element as largest
    float largest = arr[0];

    // Finding the largest element
    for (i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element = %.2f\n", largest);

    return 0;
}
