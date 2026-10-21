#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    char *greeting = malloc(14*sizeof(char));
    strcpy(greeting, "Hello, world!");
    printf("%s\n", greeting);
    free(greeting);

    greeting = malloc(2*sizeof(char));
    greeting[0] = 'J';
    greeting[1] = '\0';
    printf("%s\n", greeting);
    free(greeting);

    return 0;
}
