#include <stdio.h>

double squareRoot(double num) {
    double guess = 1.0;
    double increment = 0.00001;
    while (guess * guess < num) {
        guess += increment;
    }
    return guess;
}

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    double result = squareRoot(number);
    printf("The square root of %.2f is %.2f\n", number, result);

    return 0;
}
