#include <stdio.h>


int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int dig;
    int n;
    int i;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&dig);
        a[dig]++;
    }
    for(i=0;i<10;i++){
        printf("%d %d\n",i,(a[i]-i));

    }
    return 0;
}