/*
Author:JACKSON NJENGA
Rwg No:CT102/G/21788/23
*/
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "c:\\users\\home\\jay\\c program\\data.bin"

// Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

void writeToFile(struct Person *persons, int count) {
    FILE *file = fopen(FILENAME, "wb");  // Open in binary write mode
    if (file == NULL) {
        printf("Unable to open file for writing\n");
        exit(1);
    }

    // Write the array to the file
    fwrite(persons, sizeof(struct Person), count, file);
    fclose(file);
}

void readFromFile(struct Person *persons, int count) {  // Adjusted function name
    FILE *file = fopen(FILENAME, "rb");  // Open in binary read mode
    if (file == NULL) {
        printf("Unable to open file for reading\n");
        exit(1);
    }

    // Read the array from the file
    fread(persons, sizeof(struct Person), count, file);
    fclose(file);
}

void displayPersons(struct Person *persons, int count) {  // Adjusted function name
    printf("Displaying persons from file:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Age: %d, Height: %.2f cm\n", persons[i].name, persons[i].age, persons[i].height);
    }
}

int main() {
    int n;
    printf("Enter the number of persons: ");
    scanf("%d", &n);

    struct Person persons[n];

    // Input data for each person
    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", persons[i].name);
        printf("Enter age: ");
        scanf("%d", &persons[i].age);
        printf("Enter height (in cm): ");
        scanf("%f", &persons[i].height);
    }

    // Write the array of structures to the file
    writeToFile(persons, n);

    // Read the array from the file
    struct Person personsFromFile[n];
    readFromFile(personsFromFile, n);  

    // Display the data read from the file
    displayPersons(personsFromFile, n);  

    return 0;
}
