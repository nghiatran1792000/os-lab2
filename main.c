#include <stdio.h>
#include "factorial.h"
#include "readline.h"

int main() {
    char a[20];
    scanf("%s", a);
    if (read_line(a) == 1) {
        int number;
        sscanf(a, "%d", &number);
        printf("%s", factorial(number));
    }
    else printf("-1");
    return 0;
}
