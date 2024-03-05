#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight in kilograms
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    // Input height in meters
    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the result
    printf("Your BMI is: %.2f\n", bmi);

    // Interpretation of BMI
    if (bmi < 18.5)
        printf("You are underweight.\n");
    else if (bmi < 25)
        printf("You are normal weight.\n");
    else if (bmi < 30)
        printf("You are overweight.\n");
    else
        printf("You are obese.\n");

    return 0;
}
