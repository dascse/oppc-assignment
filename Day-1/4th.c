#include <stdio.h>

int main() {
    char str[20];  // String input
    int length = 0, flag = 1;  // Initialize length and flag
    
    // Input the string
    printf("Enter string: ");
    gets(str);
    
    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }
    
    // Check if the string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;  // If characters don't match, it's not a palindrome
 break;
        }
    }
    
    // Output the result
    if (flag == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }


}
