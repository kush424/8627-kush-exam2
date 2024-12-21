// WAP to find sum of all odd value from given 1D Array.

#include <stdio.h>


int sumOfOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sumOfOdd(arr, size);
    printf("The sum of all odd values in the array is: %d\n", result);
    return 0;
}
