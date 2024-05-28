#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 128  

void preprocessShiftTable(char* pattern, int patternLength, int shiftTable[]) {
    int i;

   
    for (i = 0; i < ALPHABET_SIZE; i++) {
        shiftTable[i] = patternLength;
    }

    for (i = 0; i < patternLength - 1; i++) {
        shiftTable[(unsigned char)pattern[i]] = patternLength - 1 - i;
    }
}

int main() {
    char pattern[] = "APPLE";
    int patternLength = strlen(pattern);
    int shiftTable[ALPHABET_SIZE];

    preprocessShiftTable(pattern, patternLength, shiftTable);

   
    printf("Character | Shift\n");
    printf("-----------------\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("    %c     |  %d\n", c, shiftTable[(unsigned char)c]);
    }
    printf("    _     |  %d\n", shiftTable['_']);

    return 0;
}