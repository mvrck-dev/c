#include <stdio.h>

int recursive_binary_search(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return recursive_binary_search(arr, mid + 1, high, key);
    } else {
        return recursive_binary_search(arr, low, mid - 1, key);
    }
}

int main() {
    int arr[100], n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = recursive_binary_search(arr, 0, n - 1, key);
    
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found.\n");
    }
    
    return 0;
}
