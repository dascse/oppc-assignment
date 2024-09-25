#include <stdio.h>

int main() {
    char str[100];  // To store the input string
    int vowels = 0, consonants = 0;
    char ch;

    // Input the string
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);  // Read string including spaces

    // Iterate over the string to count vowels and consonants
    for (int i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        // Convert character to lowercase for easier comparison
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;  // Convert uppercase to lowercase
        }

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;  // It's a vowel
        }
        // Check if the character is a consonant (i.e., alphabetic but not a vowel)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;  // It's a consonant
        }
    }

    // Output the results
   printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);


}
