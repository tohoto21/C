#include <stdio.h>
#include <string.h>

void replace(char * dest, const char * src)
{
    size_t lenbomb = strlen("bomb");
    size_t lenwater = strlen("watermelon"); 
    char * s;   
    char * p;   
    char * d;   

                    
    s = (char *)src;            
    p = NULL;                   
    d = dst;                  

    p = strstr(s, "bomb");
    if (p != NULL) {            
        size_t n = p - s;       
        strncpy(d, s, n);       
        d = d + n;              
        strcpy(d, "watermelon");
        d = d + lenwater;
        s = p + lenbomb;       
    }
    strcpy(d, s);
}


int main(){
    char d[1000];

    replace(d, "abcbomb lord bomb xyz");
    printf("<%s>\n", d);
    assert(0 == strcmp(d, "abcbomb lord bomb xyz"));
    return 0;
}
