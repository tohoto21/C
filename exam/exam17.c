#include <stdio.h>
#include <string.h>

int main(){
    char s[24];
    char * max_s;
    int len = 0;

    for(;;){
        scanf("%23s",s);
        if(0 == strcmp(s,"energy"))
            break;
        if(len < strlen(s)){
            len = strlen(s);
            max_s = s;
        }
    }
    printf("%s %d", max_s, len);
    return 0;
}