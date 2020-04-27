#include <stdio.h>
#include "factorial.h"
#include "readline.h"

int main(int argc, char* argv[]) {
    char* str;    
    while(fgets(str, 50, stdin) != NULL) {
        if (read_line(str) == 1) {
            int number;
            sscanf(str, "%d", &number);
            printf("%s", factorial(number));
        }
        else {
            printf("-1");
        }
    }
    return 0;
} 
