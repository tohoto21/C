#include <stdio.h>
#define N 100

typedef struct {
    char a[N];
    unsigned int n;
} Decimal;

void elong_print(Decimal x){
    int i;
    
    for(i=x.n;i>=0;i--){
        printf("%d",x.a[i]);
        }
    printf("\n");
    return 0;
}

int main(){
    Decimal x = {{7, 4, 1}, 2};
    Decimal zero ={{0}, 0};
    elong_print(x);     
    elong_print(zero);  
    return 0;
}
