#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[512] = {0x00};
    if (fgets(line, sizeof(line), stdin) == NULL){
        exit(EXIT_FAILURE);
    }
    printf("%s \n", line);
    exit(EXIT_SUCCESS);
}
