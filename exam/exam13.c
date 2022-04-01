#include <stdio.h>
#define N 100

typedef struct {
    char a[N];       
    unsigned int n;  
}Decimal;

void elong_set ( Decimal *res, const char *str){
    int q=0;
    int i;

    for(i=0; str[i]; i++){
        printf("str-%c\n",str[i]);
        q++;
        printf("q-%d\n",q);
    }
    res -> n = q -1;
    for(i=0,q--;q>=0;i++,q--){
        res -> a[i] = str[q] - '0';
    }

}

void elong_print(Decimal x){
    int i;
    
    for(i=x.n;i>=0;i--){
        printf("%c",x.a[i]);
        }
    printf("\n");
   
}

int main(){
    Decimal res;
    const char str[] = "12345";
    elong_set(&res,str);
    elong_print(res);
    return 0;
}
