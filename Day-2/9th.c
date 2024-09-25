#include <stdio.h>

#define MAX_LENGTH 100

void concatenate(char result[], const char str1[], const char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[j++] = str1[i++];
    }

    i = 0;
    while (str2[i] != '\0') {
        result[j++] = str2[i++];
    }


    result[j] = '\0';
}

int compare(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];  
        }
 }
        i++;
    
    return str1[i] - str2[i];  
}

void trim_newline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';  
            break;
        }
        i++;
    }
}

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH], concatenated[MAX_LENGTH];
    int comparisonResult;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    trim_newline(str1);  
printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    trim_newline(str2);  

    concatenate(concatenated, str1, str2);
    printf("Concatenated String: %s\n", concatenated);

    comparisonResult = compare(str1, str2);
    if (comparisonResult == 0) {
        printf("The strings are equal.\n");
    } else if (comparisonResult < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }
}
