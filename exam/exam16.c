#include <stdio.h>
#include <string.h>

char * my_strcat (char *dest, const char *src){

    for(dest += strlen(dest) - 1,src++; *src;dest++,src++ )
        *dest = *src;
    
    *dest = '\0';
    return dest;
}

int main(){

    char dest[10];
    strcpy(dest,"[Hel]");
    const char *src ="[lo]";
   
    my_strcat(dest,src);    
    printf("%s  %s %zd",dest,src,strlen(dest) );
    return 0;
}