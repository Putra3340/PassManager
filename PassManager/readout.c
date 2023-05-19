#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_LINE_LENGTH 100

void printMessage() {
    FILE* file;
    char line[MAX_LINE_LENGTH];
    int lineCount = 0;

    // Open the file
    if (fopen_s(&file, "danch.dll", "r") != 0) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Read the file line by line until reaching line 10
    while (fgets(line, sizeof(line), file) != NULL) {
        lineCount++;
        if (lineCount == 10) {
            // Remove the newline character at the end of the line
            line[strcspn(line, "\n")] = '\0';

            // Store line 10 as a string variable
            char firstcategory[MAX_LINE_LENGTH];
            strcpy_s(firstcategory, sizeof(firstcategory), line);

            printf("%s\n", firstcategory);

        }
        // Read Line 12
        if (lineCount == 12) {

            line[strcspn(line, "\n")] = '\0';
            char firstoneemail[MAX_LINE_LENGTH];
            strcpy_s(firstoneemail, sizeof(firstoneemail), line);

            printf("%s\n", firstoneemail);

        }
        // Read Line 13
        if (lineCount == 13) {

            line[strcspn(line, "\n")] = '\0';
            char firsttwoemail[MAX_LINE_LENGTH];
            strcpy_s(firsttwoemail, sizeof(firsttwoemail), line);

            printf("%s\n", firsttwoemail);

        }
        // Read Line 14
        if (lineCount == 14) {

            line[strcspn(line, "\n")] = '\0';
            char firsttriemail[MAX_LINE_LENGTH];
            strcpy_s(firsttriemail, sizeof(firsttriemail), line);

            printf("%s\n\n", firsttriemail);

        }
        // Read Line 20
        if (lineCount == 20) {

            line[strcspn(line, "\n")] = '\0';
            char secondcategory[MAX_LINE_LENGTH];
            strcpy_s(secondcategory, sizeof(secondcategory), line);

            printf("%s\n", secondcategory);

        }
        // Read Line 22
        if (lineCount == 22) {

            line[strcspn(line, "\n")] = '\0';
            char secondoneemail[MAX_LINE_LENGTH];
            strcpy_s(secondoneemail, sizeof(secondoneemail), line);

            printf("%s\n", secondoneemail);

        }

        if (lineCount == 23) {

            line[strcspn(line, "\n")] = '\0';
            char secondtwoemail[MAX_LINE_LENGTH];
            strcpy_s(secondtwoemail, sizeof(secondtwoemail), line);

            printf("%s\n", secondtwoemail);

        }

        if (lineCount == 24) {

            line[strcspn(line, "\n")] = '\0';
            char secondtriemail[MAX_LINE_LENGTH];
            strcpy_s(secondtriemail, sizeof(secondtriemail), line);

            printf("%s\n", secondtriemail);

        }
    }
        // Close the file
        fclose(file);
}
