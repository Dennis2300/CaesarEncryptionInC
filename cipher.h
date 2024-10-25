#ifndef CIHPER_H
#define CIHPER_H

int LetterToNumber(char letter);
char NumberToLetter(int number, int isUppercase);
int shift(int number, int shiftValue);
void encrypt(char *text, int shiftValue);
void decrypt(char *text, int shiftValue);
void init();

#endif