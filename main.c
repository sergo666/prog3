#include <stdio.h>

int main(int argv, char *argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    return 0;
}
