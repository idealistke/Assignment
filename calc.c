//ENE-212-0089/2021   RONALDO NEVIS

#include <stdio.h>

int main() {
    // Declare variables gto store user input
    double num1, num2;

    // Prompt user to enter the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Prompt user to enter the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the sum and difference
    double sum = num1 + num2;
    double difference = num1 - num2;

    // Display the results
    printf("\nThe Sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);
    printf("The Difference of %.2lf and %.2lf is: %.2lf\n", num1, num2, difference);
    printf("The sum and difference are: %.2lf and %.2lf\n", sum, difference);

    return 0;
}
