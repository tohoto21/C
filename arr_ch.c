#include <stdio.h>

void print_char(char *a,int n){
    for (;*a!= '\0';a++){
        printf("%c",*a);
        
    }
    printf("\n");
}

int main()
{
    char *a;
    char str1[] = "abcdefghlmn";
    print_char(str1 + 3, 3);
    a = str1+3;
    *a = 'D';
    print_char(str1, 7);
    return 0;
}