#include <stdio.h>

#define STUDENT_COUNT 5

// Define a structure to hold student data
struct Student {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float percentage;
};

int main() {
    struct Student students[STUDENT_COUNT];
    int i;

    // Input data for 5 students
    printf("Enter details for %d students:\n", STUDENT_COUNT);
    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); // Accept string with spaces

        printf("Enter Chemistry Marks: ");
        scanf("%f", &students[i].chem_marks);

        printf("Enter Mathematics Marks: ");
        scanf("%f", &students[i].maths_marks);

        printf("Enter Physics Marks: ");
        scanf("%f", &students[i].phy_marks);

        // Calculate percentage
        students[i].percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
    }

    // Display mark sheet
    printf("\nMark Sheet:\n");
    printf("-------------------------------------------------------------\n");
    printf("Roll No\tName\t\tChem\tMaths\tPhysics\tPercentage\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("%d\t%-15s%.2f\t%.2f\t%.2f\t%.2f%%\n",
               students[i].roll_no,
               students[i].name,
               students[i].chem_marks,
               students[i].maths_marks,
               students[i].phy_marks,
               students[i].percentage);
    }

    return 0;
}
