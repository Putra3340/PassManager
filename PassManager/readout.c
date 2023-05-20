#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_LINE_LENGTH 100

void printdata() {
    FILE* file;
    char firstcategory[MAX_LINE_LENGTH];
    char firstoneemail[MAX_LINE_LENGTH];
    char firsttwoemail[MAX_LINE_LENGTH];
    char firsttriemail[MAX_LINE_LENGTH];
    char secondcategory[MAX_LINE_LENGTH];
    char secondoneemail[MAX_LINE_LENGTH];
    char secondtwoemail[MAX_LINE_LENGTH];
    char secondtriemail[MAX_LINE_LENGTH];
    char thirdcategory[MAX_LINE_LENGTH];
    char thirdoneemail[MAX_LINE_LENGTH];
    char thirdtwoemail[MAX_LINE_LENGTH];
    char thirdtriemail[MAX_LINE_LENGTH];
    char forthcategory[MAX_LINE_LENGTH];
    char forthoneemail[MAX_LINE_LENGTH];
    char forthtwoemail[MAX_LINE_LENGTH];
    char forthtriemail[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];
    int lineCount = 0;
    int consoleWidth = 120;
    // Open the file
    if (fopen_s(&file, "danch.dll", "r") != 0) {
        printf("Failed to open the file.\n");
    }
    // Read the file line by line until reaching line 10
    // I HATE THIS
    while (fgets(line, sizeof(line), file) != NULL) {
        lineCount++;
        if (lineCount == 10) {
            // Remove the newline character at the end of the line
            line[strcspn(line, "\n")] = '\0';

            // Store line 10 as a string variable
            strcpy_s(firstcategory, sizeof(firstcategory), line);

        }
        // Read Line 12
        if (lineCount == 12) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(firstoneemail, sizeof(firstoneemail), line);
        }
        // Read Line 13
        if (lineCount == 13) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(firsttwoemail, sizeof(firsttwoemail), line);
        }
        // Read Line 14
        if (lineCount == 14) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(firsttriemail, sizeof(firsttriemail), line);
        }
        // Read Line 20
        if (lineCount == 20) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(secondcategory, sizeof(secondcategory), line);
        }
        // Read Line 22
        if (lineCount == 22) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(secondoneemail, sizeof(secondoneemail), line);
        }
        // Read Line 23
        if (lineCount == 23) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(secondtwoemail, sizeof(secondtwoemail), line);
        }
        // Read Line 24
        if (lineCount == 24) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(secondtriemail, sizeof(secondtriemail), line);
        }
        // Line 30
        if (lineCount == 30) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(thirdcategory, sizeof(thirdcategory), line);
        }
        if (lineCount == 32) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(thirdoneemail, sizeof(thirdoneemail), line);
        }
        if (lineCount == 33) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(thirdtwoemail, sizeof(thirdtwoemail), line);
        }
        if (lineCount == 34) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(thirdtriemail, sizeof(thirdtriemail), line);
        }
        if (lineCount == 40) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(forthcategory, sizeof(forthcategory), line);
        }
        if (lineCount == 42) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(forthoneemail, sizeof(forthoneemail), line);
        }
        if (lineCount == 43) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(forthtwoemail, sizeof(forthtwoemail), line);
        }
        if (lineCount == 44) {
            line[strcspn(line, "\n")] = '\0';
            strcpy_s(forthtriemail, sizeof(forthtriemail), line);
        }
        
    }
    //WELL Designing bois
    // I HATE IT DONT FUCKING TOUCH
    // Close the file
    fclose(file);
    // first line
    int firstWidth = strlen(firstcategory);
    int secondWidth = strlen(thirdcategory);
    int paddingone = consoleWidth - firstWidth - secondWidth;
    printf("%s%*s%s\n", firstcategory, paddingone, "", thirdcategory);
    // second line
    int thirdWidth = strlen(firstoneemail);
    int forthWidth = strlen(thirdoneemail);
    int paddingtwo = consoleWidth - thirdWidth - forthWidth;
    printf("%s%*s%s\n", firstoneemail, paddingtwo, "", thirdoneemail);
    // thirdline
    int fifthWidth = strlen(firsttwoemail);
    int sixthWidth = strlen(thirdtwoemail);
    int paddingtri = consoleWidth - fifthWidth - sixthWidth;
    printf("%s%*s%s\n", firsttwoemail, paddingtri, "", thirdtwoemail);
    // forth line
    int seventhWidth = strlen(firsttriemail);
    int eighthWidth = strlen(thirdtriemail);
    int paddingfor = consoleWidth - seventhWidth - eighthWidth;
    printf("%s%*s%s\n\n", firsttriemail, paddingfor, "", thirdtriemail);
    // fifth line (Im Becoming A Joker :>)
    int ninethWidth = strlen(secondcategory);
    int tenthWidth = strlen(forthcategory);
    int paddingfive = consoleWidth - ninethWidth - tenthWidth;
    printf("%s%*s%s\n", secondcategory, paddingfive, "", forthcategory);
    // Im bored as fuck
    int eleventhWidth = strlen(secondoneemail);
    int twelvethWidth = strlen(forthoneemail);
    int paddingsix = consoleWidth - eleventhWidth - twelvethWidth;
    printf("%s%*s%s\n", secondoneemail, paddingsix, "", forthoneemail);
    // fak
    int thirdteenthWidth = strlen(secondtwoemail);
    int forteenthWidth = strlen(forthtwoemail);
    int paddingseven = consoleWidth - thirdteenthWidth - forteenthWidth;
    printf("%s%*s%s\n", secondtwoemail, paddingseven, "", forthtwoemail);
    // sad
    int fifteenthWidth = strlen(secondtriemail);
    int sixteenthWidth = strlen(forthtriemail);
    int paddingeight = consoleWidth - fifteenthWidth - sixteenthWidth;
    printf("%s%*s%s\n", secondtriemail, paddingeight, "", forthtriemail);
}
