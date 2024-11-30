#include <stdio.h>
#include <string.h>  // for string.h functions

// Function to calculate length of a string without using string.h
int lengthWithoutLibrary(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to copy a string without using string.h
void copyWithoutLibrary(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string
}

// Function to compare two strings without using string.h
int compareWithoutLibrary(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Strings are not equal
        }
        i++;
    }
    return (str1[i] == str2[i]); // Both strings must end at the same position
}

// Function to concatenate two strings without using string.h
void concatenateWithoutLibrary(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy first string to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append second string to result
    while (str2[j] != '\0') {
        result[i + j] = str2[j];
        j++;
    }

    result[i + j] = '\0'; // Null-terminate the result string
}

// Function to reverse a string without using string.h
void reverseWithoutLibrary(char str[]) {
    int start = 0, end = lengthWithoutLibrary(str) - 1;
    while (start < end) {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

// Function to check if a string is a palindrome without using string.h
int isPalindromeWithoutLibrary(char str[]) {
    int start = 0, end = lengthWithoutLibrary(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str1[100], str2[100], result[200];

    // Input strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline from fgets

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline from fgets

    // String Handling using string.h functions
    printf("\nUsing functions from <string.h>:\n");

    // Length of a string
    printf("Length of str1: %zu\n", strlen(str1));
    printf("Length of str2: %zu\n", strlen(str2));

    // Copy string
    char copiedStr[100];
    strcpy(copiedStr, str1);
    printf("Copied str1 to copiedStr: %s\n", copiedStr);

    // Compare strings
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (comparison < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    // Concatenate strings
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated str1 and str2: %s\n", result);

    // Reverse string
    strcpy(copiedStr, str1); // Copy str1 into copiedStr before reversing
    strrev(copiedStr);
    printf("Reversed str1: %s\n", copiedStr);

    // Palindrome check
    if (strcmp(str1, strrev(str1)) == 0) {
        printf("str1 is a palindrome.\n");
    } else {
        printf("str1 is not a palindrome.\n");
    }

    // String Handling without using string.h functions
    printf("\nUsing custom functions (without <string.h>):\n");

    // Length of a string
    printf("Length of str1: %d\n", lengthWithoutLibrary(str1));
    printf("Length of str2: %d\n", lengthWithoutLibrary(str2));

    // Copy string
    copyWithoutLibrary(str1, copiedStr);
    printf("Copied str1 to copiedStr: %s\n", copiedStr);

    // Compare strings
    if (compareWithoutLibrary(str1, str2)) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    // Concatenate strings
    concatenateWithoutLibrary(str1, str2, result);
    printf("Concatenated str1 and str2: %s\n", result);

    // Reverse string
    strcpy(copiedStr, str1); // Copy str1 into copiedStr before reversing
    reverseWithoutLibrary(copiedStr);
    printf("Reversed str1: %s\n", copiedStr);

    // Palindrome check
    if (isPalindromeWithoutLibrary(str1)) {
        printf("str1 is a palindrome.\n");
    } else {
        printf("str1 is not a palindrome.\n");
    }

    return 0;
}
