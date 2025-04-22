#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (j = 0; j < 5 - i; j++) {
            if (j % 2 == 0)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}