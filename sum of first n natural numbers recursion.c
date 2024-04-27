#include <stdio.h>

int sum_of_natural_numbers(int n) {
    if (n <= 1) {
        return n;
    }
    return n + sum_of_natural_numbers(n - 1);
}

int main() {
    int n;
    printf("Enter a number to find the sum of first n natural numbers: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is: %d\n", n, sum_of_natural_numbers(n));
    return 0;
}
