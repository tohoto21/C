#include <stdio.h>

int num_space( char *str)
{
    return *str ? (*str == ' ' ? 1: 0) + num_space(str + 1)  : 0;
}


int main(int argc, char **argv)
{
    int i;
    
    for(i=1; i < argc; i++)
    {
        printf("[%s]\n",argv[i]);
        printf("num of space in argv[%d]:%d\n",i,num_space( argv[i]));
    }
    return 0;
}
