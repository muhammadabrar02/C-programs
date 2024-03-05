#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the operation
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1; // Exit with error code
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1; // Exit with error code
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0; // Exit without error
}
