/*
Author:JACKSON NJENGA
Reg No:CT102/G/21788/23
*/
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "students.txt"

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    FILE *file = fopen("c:\\users\\jay\\home\\c programs\\students.txt" , "w");  // Open file in write mode

    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        exit(1);
    }

    // Input data for each student
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);

        // Write the student data to the file
        fprintf(file, "Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data has been written to %s successfully.\n", FILENAME);

    return 0;
}
