#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            return 0;
        }
        i++;
    }
    
    return -1;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    if (compareStrings(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    
    return 0;
}




