#include "cipher.h"
#include <ctype.h>

// Init Function if anything needs to be initialized
void init()
{
}

int LetterToNumber(char letter)
{
    if (islower(letter)) // Check if the letter is lowercase
    {
        return letter - 'a'; // Subtracting 'a' from the letter to get the number a-> 0
    }
    else
    { // If the letter is uppercase
        return letter - 'A'; // Subtracting 'A' from the letter to get the number A -> 0
    }
    return -1;
}

char NumberToLetter(int number, int isUppercase)
{
    if (isUppercase)
    {
        return number + 'A'; // Adding 'A' to the number to get the letter
    }
    else
    {
        return number + 'a'; // Adding 'a' to the number to get the letter
    }
}

// Shift function to shift the number by the shift value
int shift(int number, int shiftValue)
{
    return (number + shiftValue) % 26; // wrapped around 26 to get the shifted number
}

// Function to encrypt the text
void encrypt(char *text, int shiftvalue) // it takes the text and the shift value
{
    for (int i = 0; text[i] != '\0'; i++) // Loop through the text
    {
        if (isalpha(text[i])) // Check if the character is an alphabet
        {
            int is_uppercase = isupper(text[i]); // Check if the character is uppercase
            int number = LetterToNumber(text[i]); // Convert the letter to a number
            int shifted = shift(number, shiftvalue); // Shift the number by the shift value
            text[i] = numberToLetter(shifted, is_uppercase); // Convert the number back to a letter
        }
    }
}

// Function to decrypt the text
void decrypt(char *text, int shiftvalue) // it takes the text and the shift value
{
    for (int i = 0; text[i] != '\0'; i++) // Loop through the text
    {
        if (isalpha(text[i])) // Check if the character is an alphabet
        {
            int is_uppercase = isupper(text[i]); // Check if the character is uppercase
            int number = LetterToNumber(text[i]); // Convert the letter to a number
            int shifted = (number - shiftvalue + 26) % 26; // Shift the number by the shift value
            text[i] = numberToLetter(shifted, is_uppercase); // Convert the number back to a letter
        }
    }
}