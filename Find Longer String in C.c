#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void findLongerString(char str1[], char str2[]) {
    int length1 = stringLength(str1);
    int length2 = stringLength(str2);

    if (length1 > length2) {
        printf("String 1 is longer.\n");
    } else if (length2 > length1) {
        printf("String 2 is longer.\n");
    } else {
        printf("Both strings are of equal length.\n");
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    findLongerString(str1, str2);

    return 0;
}