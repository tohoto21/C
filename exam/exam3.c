#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[] = {2,3,65,767,-43,65,87};
    for(int i=0; i< sizeof(m)/sizeof(*m);i++)
    {
        printf("[%d] = %d\n", i, m[i]);
     }
    return 7;
}
