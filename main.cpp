#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    // This code snippet demonstrates the usage of various C-style string functions and C++ functions from the <cctype> library. Here's a breakdown of what the code does:

// Initializes a C-style string (str1) with the value "Hello".
    char str1[20] = "Hello";

// Calculates the length of str1 using strlen() and displays it.
    int len = strlen(str1);
    std::cout << "Length of str1: " << len << std::endl;

// Copies the contents of str1 to another C-style string (str2) using strcpy() and displays it.
    char str2[20];
    strcpy(str2, str1);
    std::cout << "Copied string: " << str2 << std::endl;

// Concatenates str1 with another C-style string (str3) using strcat() and displays the result.
    char str3[20] = " World";
    strcat(str1, str3);
    std::cout << "Concatenated string: " << str1 << std::endl;

// Compares str1 with another C-style string (str4) using strcmp() and displays the result.
    char str4[20] = "Hello";
    int result = strcmp(str1, str4);
    if (result == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "str1 is less than str4." << std::endl;
    } else {
        std::cout << "str1 is greater than str4." << std::endl;
    }

// Accesses individual characters of str1 and displays the first character.
    char ch = str1[0];
    std::cout << "First character: " << ch << std::endl;

// Iterates over the characters of str1 and displays each character.
    for (int i = 0; str1[i] != '\0'; i++) {
        std::cout << str1[i] << " ";
    }
    std::cout << std::endl;

// Searches for the character 'o' in str1 using strchr() and displays its position.
    char* ptr = strchr(str1, 'o');
    if (ptr != nullptr) {
        std::cout << "Found 'o' at position: " << (ptr - str1) << std::endl;
    } else {
        std::cout << "Character not found." << std::endl;
    }

// Searches for the substring "World" in str1 using strstr() and displays its position.
    ptr = strstr(str1, "World");
    if (ptr != nullptr) {
        std::cout << "Found 'World' at position: " << (ptr - str1) << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

// Tokenizes a string (str5) using strtok() and displays each token.
    char str5[30] = "This is a sample string";
    char* token = strtok(str5, " ");
    while (token != nullptr) {
        std::cout << "Token: " << token << std::endl;
        token = strtok(nullptr, " ");
    }

// Check if a character is alphabetic
    if (isalpha(str1[0])) {
        std::cout << "First character is alphabetic." << std::endl;
    }

// Check if a character is a digit
    if (isdigit(str1[6])) {
        std::cout << "Character at index 6 is a digit." << std::endl;
    }

// Check if a character is alphanumeric
    if (isalnum(str1[4])) {
        std::cout << "Character at index 4 is alphanumeric." << std::endl;
    }

// Check if a character is a whitespace character
    if (isspace(str1[5])) {
        std::cout << "Character at index 5 is a whitespace character." << std::endl;
    }

// Convert a character to lowercase
    char lowercase = tolower(str1[0]);
    std::cout << "Lowercase of first character: " << lowercase << std::endl;

// Convert a character to uppercase
    char uppercase = toupper(str1[6]);
    std::cout << "Uppercase of character at index 6: " << uppercase << std::endl;

// Check if a character is lowercase
    if (islower(str1[4])) {
        std::cout << "Character at index 4 is lowercase." << std::endl;
    }

// Check if a character is uppercase
    if (isupper(str1[7])) {
        std::cout << "Character at index 7 is uppercase." << std::endl;
    }

// Check if a character is a hexadecimal digit
    if (isxdigit(str1[8])) {
        std::cout << "Character at index 8 is a hexadecimal digit." << std::endl;
    }

// Check if a character is a printable character
    if (isprint(str1[2])) {
        std::cout << "Character at index 2 is a printable character." << std::endl;
    }

// Check if a character is a punctuation character
    if (ispunct(str1[3])) {
        std::cout << "Character at index 3 is a punctuation character." << std::endl;
    }

// Check if a character is a control character
    if (iscntrl(str1[9])) {
        std::cout << "Character at index 9 is a control character." << std::endl;
    }

    return 0;

}
