#include <stdio.h>
#include <unistd.h>

int main()
{
    int p;
    
    p =fork();
    if(p == 0)
        printf("chaild\n");
    else
        printf("parent\n");
    
    printf("Hello!\n");
    
    return 0;
}