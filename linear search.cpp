#include <stdio.h>
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1;  
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 6;  
    int result = linearSearch(arr, n, x); 

    if (result == -1) {
        printf("The number %d is not present in the array.\n", x);
    } else {
        printf("The number %d is present at index %d.\n", x, result);
    }

    return 0;
}

