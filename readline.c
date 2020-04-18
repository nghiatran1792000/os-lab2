#include "readline.h"
#include <stdio.h>

int read_line(char *str) {
    int length = 0; 
    while (str[length] != '\0') length++;
    int digitInt = 0;
    for (int i = 0; i <= length - 1; i++) {
        if ((int)str[i] >= 48 && (int)str[i] <= 57) digitInt++;
    }
    if (digitInt == length) return 1;
    else return 0;
}