#include <stdio.h>
 
 
 int add(int a, int b);
 int subtract(int a, int b);
 int multiply(int a, int b);
 float divide(int a, int b);
 int modulus(int a, int b);
 
 int main() {
     int choice, a, b;
     char repeat = 'y';
 
     while (1) {
         printf("\n====== Calculator Menu ======\n");
         printf("Press 1 for Addition (+)\n");
         printf("Press 2 for Subtraction (-)\n");
         printf("Press 3 for Multiplication (*)\n");
         printf("Press 4 for Division (/)\n");
         printf("Press 5 for Modulus (%%)\n");
         printf("Press 0 to Exit\n");
         printf("Enter your choice: ");
         scanf("%d", &choice);
 
         if (choice == 0) {
             printf("Exiting the program. Thank you!\n");
             break;
         }
 
         
         if (choice < 1 || choice > 5) {
             printf("Invalid choice! Please try again.\n");
             continue;
         }
 
         
         printf("Enter two integers: ");
         scanf("%d %d", &a, &b);
 
    
         switch (choice) {
             case 1:
                 printf("Result: %d + %d = %d\n", a, b, add(a, b));
                 break;
             case 2:
                 printf("Result: %d - %d = %d\n", a, b, subtract(a, b));
                 break;
             case 3:
                 printf("Result: %d * %d = %d\n", a, b, multiply(a, b));
                 break;
             case 4:
                 if (b != 0)
                     printf("Result: %d / %d = %.2f\n", a, b, divide(a, b));
                 else
                     printf("Error: Division by zero is not allowed!\n");
                 break;
             case 5:
                 if (b != 0)
                     printf("Result: %d %% %d = %d\n", a, b, modulus(a, b));
                 else
                     printf("Error: Modulus by zero is not allowed!\n");
                 break;
         }
     }
 
     return 0;
 }
 
 
 int add(int a, int b) {
     return a + b;
 }
 
 int subtract(int a, int b) {
     return a - b;
 }
 
 int multiply(int a, int b) {
     return a * b;
 }
 
 float divide(int a, int b) {
     return (float)a / b;
 }
 
 int modulus(int a, int b) {
     return a % b;
 }