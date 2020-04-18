#include "factorial.h"
#include <stdlib.h>

char* factorial(const int aNumber) {
    long fact = 1;
    for (int i = 1; i <= aNumber; i++) fact *= i;
    char* temp = malloc(aNumber * sizeof(char));
    int index = 0;
    while (fact >= 10) {
        int digit = fact % 10;
        *(temp + index) = digit + '0';
        fact = fact / 10;
        index++;
    }
    *(temp + index) = fact + '0';
    for (int i = 0; i <= index / 2; i++) {
        char tempChar = temp[i];
        temp[i] = temp[index - i];
        temp[index - i] = tempChar;
    }
    return temp;
}