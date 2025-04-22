#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;  

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        space = 2 * (n - i);
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}