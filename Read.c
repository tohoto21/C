#include <unistd.h>

int writer(char c)
{
    
    write(1, &c, 1);
    return 0;
}

int main()
{
    char q;
    read(0, &q, 1);
    if (q == 'w')
        writer(q);
    return 0;
}
