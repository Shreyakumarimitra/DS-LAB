#include <stdio.h>

int findMax(int arr[], int size) {
    int i, max;
    max = arr[0];
    for(i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int findMin(int arr[], int size) {
    int i, min;
    min = arr[0];
    for(i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr[100];
    int n, i, maxValue, minValue;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    maxValue = findMax(arr, n);
    minValue = findMin(arr, n);
    printf("Maximum value = %d\n", maxValue);
    printf("Minimum value = %d\n", minValue);
    return 0;
}