#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[5];   // Array to store marks for 5 subjects
    float total;
    float average;
    char grade;
};

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[50];  // Array to store details of up to 50 students

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        
        printf("Enter name: ");
        getchar(); // to consume the newline character
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Remove newline from string
        
 printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        students[i].total = 0;

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }

        // Calculate the average
        students[i].average = students[i].total / 5.0;

        // Determine the grade based on average
        if (students[i].average >= 90) {
 students[i].grade = 'A';
        } else if (students[i].average >= 80) {
            students[i].grade = 'B';
        } else if (students[i].average >= 70) {
            students[i].grade = 'C';
        } else if (students[i].average >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }

    // Display the results for each student
    printf("\nResults:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Average Marks: %.2f\n", students[i].average);
        printf("Grade: %c\n", students[i].grade);
    }


}