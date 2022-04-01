#include <stdio.h>
#include <string.h>

char * my_copy(char *dest, const char *src){
    int n = strlen(dest) + strlen(src);
    char p[n];
    
    int k;
    int i;
    for(i=0;dest[i];i++)
    {
        p[i] = dest[i];
    }
    for(k = 0;src[k];k++,i++){
        p[i] = src[k];
    }
    p[i+1] = '\n';
    dest = p;
    return dest;
}

int main(){
    char *dest ="Hel";
    const char *src ="lo";
   
    
    printf("%s  %s %s",dest,src, my_copy(dest,src));
    return 0;
}