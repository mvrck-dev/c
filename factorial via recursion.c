#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    printf("The factorial of %d is: %d\n", n, factorial(n));
    return 0;
}
