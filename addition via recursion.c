#include <stdio.h>

int add_recursively(int a, int b) {
    if (b == 0) {
        return a;
    }
    return add_recursively(a + 1, b - 1);
}

int main() {
    int a, b;
    printf("Enter two numbers to find their sum: ");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is: %d\n", a, b, add_recursively(a, b));
    return 0;
}
