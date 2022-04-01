#include <stdio.h>

int main()
{
    int a[10];
    int* p ;
    
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
       
        scanf("%d",&a[i]);
    }
    p=a;
    for(int j=0;j<n;p++,j++){
        printf("%d",*p);
    }
    printf("\n");
    return 0;
}