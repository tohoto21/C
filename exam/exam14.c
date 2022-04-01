#include <stdio.h>
#include <string.h>


int main(){
    int i;
    char s[10];
    int steps;
    int x=0;
    int y=0;
    for(;;){
        scanf("%9s",s);

        if(0 == strcmp(s, "Treasure!"))
            break;

        scanf("%d", &steps);

        if(0 == strcmp(s, "North"))
            y += steps; 
        if(0 == strcmp(s, "South"))
            y -= steps;
        if(0 == strcmp(s, "East"))
            x += steps;
        if(0 == strcmp(s, "West"))
            x -= steps;
        else{
            printf("error in stdin");
            return 1;
        }

        free(s);
    }
    printf("%d %d", x, y);
    return 0;
}