/*
Author:JACKSON NJENGA
Reg No:CT102/G/21788/23
*/
#include <stdio.h>
#include<stdlib.h>

int main() {
    FILE *file;
    int n;
    char name[50];
    int marks;
    
    // Open file in append mode
    file = fopen("c:\\users\\jay\\home\\c programs\\students.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        // Write name and marks to the file
        fprintf(file, "Student %d: Name = %s\n, Marks = %d\n", i + 1, name, marks);
    }

    // Close the file
    fclose(file);

    printf("Data successfully added to students.txt\n");

    return 0;
}