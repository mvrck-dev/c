#include <stdio.h>

int main() {
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'Z') {
        letter = letter + 32;
        printf("The small letter is: %c\n", letter);
    } else if (letter >= 'a' && letter <= 'z') {
        letter = letter - 32;
        printf("The capital letter is: %c\n", letter);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}