#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPrime = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    int isEven = (num % 2 == 0);

    switch (isPrime) {
        case 1:
            printf("%d is a prime number.\n", num);
            break;
        case 0:
            printf("%d is a composite number.\n", num);
            break;
    }

    switch (isEven) {
        case 1:
            printf("%d is an even number.\n", num);
            break;
        case 0:
            printf("%d is an odd number.\n", num);
            break;
    }

    return 0;
}
