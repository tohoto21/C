#include <stdio.h>
#define N 100

typedef struct {
    char a[N];       
    unsigned int n;  
}Decimal;

void elong_set ( Decimal *res, const char *str){
    int q;
    int i ;
    unsigned int k;
    const char *p;
    for(i=0; str[i]; i++){
        printf("str-%c\n",str[i]);
        q++;
        printf("q-%d\n",q);
    }
    for(i=0;str[i];i++)
    {printf("i - %d\n",i);}
    for(p = str; *p; p++)
        {}
    k = p - str;
    printf("k - %d\n",k);
    for(i=0,p--;i<k;i++,p--){
        printf("*p - %c\n",*p);
        res -> a[i] = *p;
        printf("res -%c\n",res -> a[i]);

    }
    res -> n = k - 1;
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
