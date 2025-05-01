#include <stdio.h>

void findCubes(int *arr, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
    
            int val = *(arr + i * cols + j);
            printf("Cube of element [%d][%d] (%d) = %d\n", i, j, val, val * val * val);
        }
    }
}

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    findCubes(&arr[0][0], rows, cols);  

    return 0;
}
