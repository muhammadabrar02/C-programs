#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int num1 = 5, num2 = 10, sum;
    
    // Function call
    sum = add(num1, num2);
    
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
