#include <stdio.h>

int num_space(char *str){
    int res = 0;

    for(int i = 0;str[i];i++)
    {
        if(str[i] == ' ')
            res++;
    }

    return res;
}

int main(int argc, char **argv)
{
    int i;

    for(i=1; i < argc; i++)
    {
        printf("[%s]\n",argv[i]);
        printf("num of space in argv[%d]:%d\n",i,num_space(argv[i]));
    }
    return 0;
}
