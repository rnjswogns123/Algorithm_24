#include <stdio.h>

void printIntArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printCharArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

void sortIntArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortCharArray(char arr[], int size) {
    char temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {

    char letters[] = { 'g', 'f', 'e', 'Z', 'v', 'D', 'o' };
    int numbers[] = { 32, 5, 34, 25, 56, 3, 46 };

    int sizeLetters = sizeof(letters) / sizeof(letters[0]);
    int sizeNumbers = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original  : [ ");
    for (int i = 0; i < sizeLetters; i++) {
        printf("'%c', ", letters[i]);
    }
    printf("]\n");

    printf("Counting : [ ");
    for (int i = 0; i < sizeNumbers; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("]\n");


    sortIntArray(numbers, sizeNumbers);
    printf("Counting : [ ");
    for (int i = 0; i < sizeNumbers; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("]\n");

  
    sortCharArray(letters, sizeLetters);
    printf("Counting : [ ");
    for (int i = 0; i < sizeLetters; i++) {
        printf("'%c', ", letters[i]);
    }
    printf("]\n");

    printf("계속하려면 아무 키를 누르십시오. . .");
    getchar();

    return 0;
}