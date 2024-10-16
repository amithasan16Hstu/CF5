#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEXT_SIZE 1000

void readFromFile(char *filename, char *text) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File not found or could not be opened.\n");
        return;
    }

    char c;
    int index = 0;
    while ((c = fgetc(file)) != EOF && index < MAX_TEXT_SIZE - 1) {
        text[index++] = c;
    }
    text[index] = '\0';

    fclose(file);
}

void writeToFile(char *filename, char *text) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("File could not be opened for writing.\n");
        return;
    }

    fprintf(file, "%s", text);
    fclose(file);
}

int countLines(char *text) {
    int lines = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            lines++;
        }
    }
    return lines + 1; // Add 1 for the last line if not ending with '\n'
}

int countWords(char *text) {
    int words = 0;
    int inWord = 0; // Flag to check if currently inside a word
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
            inWord = 0; // Not inside a word
        } else {
            if (inWord == 0) {
                words++;
                inWord = 1; // Inside a word
            }
        }
    }
    return words;
}

void findPattern(char *text, char *pattern) {
    char *found = strstr(text, pattern);
    if (found != NULL) {
        printf("Pattern found at position: %ld\n", found - text);
    } else {
        printf("Pattern not found in the text.\n");
    }
}

void insertString(char *text, int position, char *str) {
    memmove(text + position + strlen(str), text + position, strlen(text) - position + 1);
    strncpy(text + position, str, strlen(str));
}

void deleteString(char *text, int position, int length) {
    memmove(text + position, text + position + length, strlen(text) - position - length + 1);
}

void appendString(char *text, char *str) {
    strcat(text, str);
}

void replaceString(char *text, char *oldStr, char *newStr) {
    char *found = strstr(text, oldStr);
    if (found != NULL) {
        int position = found - text;
        deleteString(text, position, strlen(oldStr));
        insertString(text, position, newStr);
    }
}

int main() {
    char filename[100];
    char text[MAX_TEXT_SIZE];
    int choice;

    printf("Enter the filename: ");
    scanf("%s", filename);

    readFromFile(filename, text);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Count lines, characters, and words\n");
        printf("2. Find a pattern\n");
        printf("3. Insert text at a specific position\n");
        printf("4. Delete text from a specific position\n");
        printf("5. Append text to the end\n");
        printf("6. Replace text\n");
        printf("7. Save and exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Lines: %d\n", countLines(text));
                printf("Characters: %lu\n", strlen(text));
                printf("Words: %d\n", countWords(text));
                break;

            case 2:
                printf("Enter a pattern to find: ");
                char pattern[100];
                scanf("%s", pattern);
                findPattern(text, pattern);
                break;

            case 3:
                printf("Enter position to insert: ");
                int position;
                scanf("%d", &position);
                printf("Enter text to insert: ");
                char insertText[100];
                scanf("%s", insertText);
                insertString(text, position, insertText);
                break;

            case 4:
                printf("Enter position to delete from: ");
                int deletePosition;
                scanf("%d", &deletePosition);
                printf("Enter number of characters to delete: ");
                int deleteLength;
                scanf("%d", &deleteLength);
                deleteString(text, deletePosition, deleteLength);
                break;

            case 5:
                printf("Enter text to append: ");
                char appendText[100];
                scanf("%s", appendText);
                appendString(text, appendText);
                break;

            case 6:
                printf("Enter old text to replace: ");
                char oldText[100];
                scanf("%s", oldText);
                printf("Enter new text: ");
                char newText[100];
                scanf("%s", newText);
                replaceString(text, oldText, newText);
                break;

            case 7:
                writeToFile(filename, text);
                printf("Text saved to file. Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
