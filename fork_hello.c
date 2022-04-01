#include <stdio.h>
#include <unistd.h>
int main()
{
    int p = fork();
    if(p == 0) {
        printf("children\n");
    } else {
        printf("perents\n");
    }
    return 0;
}