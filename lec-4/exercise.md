## Debug
3.
Error
```
==2105==ERROR: AddressSanitizer: heap-use-after-free on address 0x503000000040 at pc 0x559842be5236 bp 0x7fff15f3c120 sp 0x7fff15f3c118
```

错误信息：使用已经释放的内存, after modiftied


```c
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
```
