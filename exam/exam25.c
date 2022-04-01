#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *from, *to;
    int c, lcnt;

    if(argc < 3)
    {
        fprintf(stderr, "malo argumentov\n");
        return 1;
    }

    from = fopen(argv[1],"r");
    if(!from)
    {
        perror(argv[1]);
        return 2;
    }

    from = fopen(argv[2],"a");
    if(!from)
    {
        perror(argv[2]);
        return 3;
    }

    lcnt = 0;
    while((c = fgetc(from)) != EOF)
    {
        fputc(c, to);

        if(c == '\n')
            lcnt++;
        if(lcnt >= 10)
            break;
    } 
    return 0;

}