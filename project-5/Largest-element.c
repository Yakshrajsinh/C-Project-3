#include <stdio.h>
 
 int main() {
     int rows, cols, i, j, largest;
 
     printf("Enter the array's row size: ");
     scanf("%d", &rows);
     printf("Enter the array's column size: ");
     scanf("%d", &cols);
 
     int arr[rows][cols];
 
     for (i = 0; i < rows; i++) {
         for (j = 0; j < cols; j++) {
             printf("a[%d][%d] = ", i, j);
             scanf("%d", &arr[i][j]);
         }
     }
 
     largest = arr[0][0];
 
     for (i = 0; i < rows; i++) {
         for (j = 0; j < cols; j++) {
             if (arr[i][j] > largest) {
                 largest = arr[i][j];
             }
         }
     }
 
     printf("The largest element is: %d\n", largest);
 
     return 0;
 }