#include <unistd.h>

int main()
{
    char q = 'q';
    write(1, &q, 1);
    return 0;
}