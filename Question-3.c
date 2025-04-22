#include <stdio.h>

int main() {
    int num, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store last digit
    last = num % 10;

    // Extract first digit
    while (num >= 10) {
        num /= 10;
    }
    first = num;

    sum = first + last;

    printf("Sum of first and last digits = %d\n", sum);

    return 0;
}