#include <stdio.h>
int main(){
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
