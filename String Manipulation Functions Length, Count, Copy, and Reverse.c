#include <stdio.h>

int strLen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int cntChr(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
int cntVwls(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
        i++;
    }
    return count;
}
void strCpy(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
void strReverse(char str[]) {
    int length = strLen(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    // Calculate and display the length of the string
    int length = strLen(input);
    printf("Length of the string: %d\n", length);

    // Calculate and display the total number of characters in the string
    int charCount = cntChr(input);
    printf("Total number of characters: %d\n", charCount);

    // Calculate and display the total number of vowels in the string
    int vowelCount = cntVwls(input);
    printf("Total number of vowels: %d\n", vowelCount);

    // Copy the string into another string
    char copiedString[100];
    strCpy(input, copiedString);
    printf("Copied string: %s\n", copiedString);

    // Reverse the string
    strReverse(input);
    printf("Reversed string: %s\n", input);

    return 0;
}