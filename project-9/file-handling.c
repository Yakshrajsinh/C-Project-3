#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int i;

    
    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d\n", i);
        } else {
            fprintf(oddFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers written to even.txt and odd.txt successfully.\n");

    return 0;
}
