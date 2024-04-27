#include <stdio.h>

int main() {
    int arr[100], n, key, low, high, mid;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;
    int found = 0;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (found) {
        printf("Element found at index: %d\n", mid);
    } else {
        printf("Element not found.\n");
    }
    
    return 0;
}
