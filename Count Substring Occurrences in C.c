#include <stdio.h>

int countSubstring(const char *str, const char *sub) {
    int count = 0;
    int i = 0, j = 0;

    while (str[i] != '\0') {
        while (str[i] == sub[j] && sub[j] != '\0') {
            i++;
            j++;
        }

        if (sub[j] == '\0') {
            count++;
            j = 0;
        } else {
            i = i - j + 1;
            j = 0;
        }
    }

    return count;
}

int main() {
    char mainString[100];
    char subString[100];

    printf("Enter the main string: ");
    scanf(" %[^\n]", mainString);

    printf("Enter the substring to search: ");
    scanf("%s", subString);

    int occurrences = countSubstring(mainString, subString);
    printf("The substring '%s' occurs %d times in the main string.\n", subString, occurrences);

    return 0;
}
