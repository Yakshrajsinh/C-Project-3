#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int rowNum;
    printf("\nEnter row number (0 to %d): ", rows - 1);
    scanf("%d", &rowNum);

    if (rowNum < 0 || rowNum >= rows) {
        printf("Invalid row number!\n");
    } else {
        int rowSum = 0;
        printf("Elements of row %d: ", rowNum);
        for (j = 0; j < cols; j++) {
            printf("%d", arr[rowNum][j]);
            if (j < cols - 1) printf(", ");
            rowSum += arr[rowNum][j];
        }
        printf("\nSum of row %d: %d\n", rowNum, rowSum);
    }

    int colNum;
    printf("\nEnter column number (0 to %d): ", cols - 1);
    scanf("%d", &colNum);

    if (colNum < 0 || colNum >= cols) {
        printf("Invalid column number!\n");
    } else {
        int colSum = 0;
        printf("Elements of column %d: ", colNum);
        for (i = 0; i < rows; i++) {
            printf("%d", arr[i][colNum]);
            if (i < rows - 1) printf(", ");
            colSum += arr[i][colNum];
        }
        printf("\nSum of column %d: %d\n", colNum, colSum);
    }

    return 0;
}
