#include <stdio.h>

double recursive_sqrt(double num, double guess) {
    double difference = guess * guess - num;
    if (difference < 0) {
        difference = -difference;
    }
    if (difference < 0.00001) {
        return guess;
    }
    return recursive_sqrt(num, (guess + num / guess) / 2);
}

int main() {
    double num;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);
    double initial_guess = num / 2.0;
    printf("The square root of %.5f is: %.5f\n", num, recursive_sqrt(num, initial_guess));
    return 0;
}
