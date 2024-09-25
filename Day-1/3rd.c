#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

int main() {
    int num_students, found = 0;
    char studentList[MAX_STUDENTS][NAME_LENGTH];
    char name_to_check[NAME_LENGTH];
    
    
    printf("Enter the number of students in the class: ");
    scanf("%d", &num_students);
    
    
    for (int i = 0; i < num_students; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", studentList[i]);
    }
    
    
    printf("Enter the name of the student to check: ");
    scanf("%s", name_to_check);
    
    
    for (int i = 0; i < num_students; i++) {
        if (strcmp(studentList[i], name_to_check) == 0) {
            found = 1;
            break;
        }
    }
  if (found) {
        printf("Student found!\n");
    } else {
        printf("Student not found!\n");
    
}
}