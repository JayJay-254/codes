/*
Author:JACKSON NJENGA
Reg No:CT102/G/21788/23
*/
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "data.txt"
#define MAX_LENGTH 100

// Function to write a sentence to a file
void writeToFile() {
    FILE *file = fopen(FILENAME, "w"); // Open file in write mode
    if (file == NULL) {
        perror("Error opening file for writing"); // Error handling
        return;
    }

    char sentence[MAX_LENGTH];
    printf("Enter a sentence (up to %d characters): ", MAX_LENGTH - 1);
    fgets(sentence, MAX_LENGTH, stdin); // Read a sentence from the user

    if (fputs(sentence, file) == EOF) {
        perror("Error writing to file"); // Error handling if writing fails
    } else {
        printf("Sentence written to %s successfully.\n", FILENAME);
    }

    fclose(file); // Close the file
}

// Function to read content from a file and display it on the screen
void readFromFile() {
    FILE *file = fopen(FILENAME, "r"); // Open file in read mode
    if (file == NULL) {
        perror("Error opening file for reading"); // Error handling
        return;
    }

    char sentence[MAX_LENGTH];
    printf("Contents of %s:\n", FILENAME);

    // Read and display each line from the file
    while (fgets(sentence, MAX_LENGTH, file) != NULL) {
        printf("%s", sentence);
    }

    if (ferror(file)) {
        perror("Error reading from file"); // Error handling if reading fails
    }

    fclose(file); // Close the file
}

// Function to append a sentence to the file without overwriting existing content
void appendToFile() {
    FILE *file = fopen(FILENAME, "a"); // Open file in append mode
    if (file == NULL) {
        perror("Error opening file for appending"); // Error handling
        return;
    }

    char sentence[MAX_LENGTH];
    printf("Enter another sentence to append (up to %d characters): ", MAX_LENGTH - 1);
    fgets(sentence, MAX_LENGTH, stdin); // Read a sentence from the user

    if (fputs(sentence, file) == EOF) {
        perror("Error appending to file"); // Error handling if appending fails
    } else {
        printf("Sentence appended to %s successfully.\n", FILENAME);
    }

    fclose(file); // Close the file
}

int main() {
    int choice;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Write a sentence to the file\n");
        printf("2. Read and display the file content\n");
        printf("3. Append a sentence to the file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}