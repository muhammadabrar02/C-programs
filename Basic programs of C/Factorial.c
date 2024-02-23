#include <stdio.h>

int main() {
    int n = 5, factorial = 1, i;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}
