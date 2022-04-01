#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("fil.txt", "r");
    if(!f)
    {
        fprintf(stderr, "file BOOMB\n");
        perror("fil.txt");
        exit(1);
    }
    fclose(f);
    return 0;
    
}