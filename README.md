# Caesar Cipher Program
### Description

This program implements a simple Caesar cipher encryption and decryption algorithm in C. The Caesar cipher is a substitution cipher where each letter in the plaintext is shifted a fixed number of places down or up the alphabet. This program allows users to encrypt and decrypt text based on a shift value of their choice (0-9).

### Features
**Encrypt Text**: Convert plaintext into encrypted text using a specified shift value.

**Decrypt Text**: Convert encrypted text back into plaintext using the same shift value.

**Looping Functionality**: The program continues to run, allowing multiple encryptions or decryptions until the user decides to exit.

### Requirements
1. C compiler (e.g., GCC) <br>
2. Standard C library

### How to Compile
To compile the program, use the following command:
````
gcc -o caesar caesar.c cipher.c
````
## How to Run
After compiling, run the program using:
````
./caesar
````