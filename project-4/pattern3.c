#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf("  ");  // Two spaces for better alignment
        }

        // Print numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}