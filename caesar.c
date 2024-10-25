// caesar.c
#include <stdio.h>
#include "cipher.h"

int main()
{
    char text[256];         // Text to be encrypted or decrypted
    int shiftValue, choice; // Shift value and choice for encryption or decryption
    char continueChoice;    // Choice to continue or not

    init(); // Initialize the cipher if needed

    // Loop to continue the program
    do
    {
        printf("Enter text: ");
        fgets(text, sizeof(text), stdin); // use fgets to read the whole line includes spaces

        // choose the shift value
        printf("Enter shift value (0 to 9): ");
        scanf("%d", &shiftValue);

        // Clear the input buffer
        while (getchar() != '\n') // so it doesn't read the next input if user chooses to continue
            ;

        // Check if the shift value is between 0 and 9
        if (shiftValue < 0 || shiftValue > 9)
        {
            printf("Shift value must be between 0 and 9.\n");
            continue;
        }

        // Choose to either encrypt or decrypt
        printf("Choose an option:\n1. Encrypt\n2. Decrypt\n");
        scanf("%d", &choice);

        // Clear the input buffer
        while (getchar() != '\n') // so it doesn't read the next input if user chooses to continue
            ;

        if (choice == 1)
        {
            encrypt(text, shiftValue);
            printf("Encrypted text: %s\n", text);
        }
        else if (choice == 2)
        {
            decrypt(text, shiftValue);
            printf("Decrypted text: %s\n", text);
        }
        else
        {
            printf("Invalid option.\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continueChoice);
        while (getchar() != '\n')
            ;

    } while (continueChoice == 'y' || continueChoice == 'Y');

    printf("Exiting the program.\n");
    return 0;
}
