#include <stdio.h>
int main() {
    int numStudents, i, choice;
    float marks1, marks2, marks3, total, avg;
    float classTotal = 0, classAvg = 0;
    float highest = 0, lowest = 100;
    int passed = 0, failed = 0;
    printf(" Smart Student Result Management System \n");
    printf("Enter number of students: ");
    scanf("%d", &numStudents);
    float sAvg = 0, s1, s2, s3, s4, s5, s6, s7, s8, s9; 
    int studentCount = 0;
    i = 1;
    while (i <= numStudents) {
        printf("\n--- Student %d ---\n", i);
        printf("Enter marks for Subject 1: ");
        scanf("%f", &marks1);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &marks2);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &marks3);
        total = marks1 + marks2 + marks3;
        avg = total / 3.0;   
        printf("Student %d: Avg = %.1f → ", i, avg);
        if (avg >= 90)
            printf("Grade A+\n");
        else if (avg >= 80)
            printf("Grade A\n");
        else if (avg >= 70)
            printf("Grade B\n");
        else if (avg >= 60)
            printf("Grade C\n");
        else if (avg >= 50)
            printf("Grade D\n");
        else
            printf("Fail\n");
        classTotal += avg;
        if (avg > highest) highest = avg;
        if (avg < lowest) lowest = avg;
        if (avg >= 50) passed++;
        else failed++;
        i++;
    }
    do {
        printf("\n========= Menu =========\n");
        printf("1. View All Results\n");
        printf("2. View Class Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("\n--- Result Sheet ---\n");
            printf("(Note: Individual results already displayed above.)\n");
        }
        else if (choice == 2) {
            classAvg = classTotal / numStudents;
            printf("\n--- Class Summary ---\n");
            printf("Total Students: %d\n", numStudents);
            printf("Passed: %d\n", passed);
            printf("Failed: %d\n", failed);
            printf("Class Average: %.1f\n", classAvg);
            printf("Highest Average: %.1f\n", highest);
            printf("Lowest Average: %.1f\n", lowest);
        }
        else if (choice == 3) {
            printf("Thank you! Exiting system...\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);
    return 0;
}