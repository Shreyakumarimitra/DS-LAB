#include <stdio.h>

void inputMatrix(int arr[][10], int n) {
    int i, j;
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void displayMatrix(int arr[][10], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void transposeMatrix(int arr[][10], int n) {
    int i, j;
    printf("Transpose of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
int main() {
    int matrix[10][10];
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    inputMatrix(matrix, n);
    printf("Original Matrix:\n");
    displayMatrix(matrix, n);
    transposeMatrix(matrix, n);
    return 0;
}