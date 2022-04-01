#include <stdio.h>


int main()
{
    int a[] = {5000,1000,500,100,50,10,5,2,1};
    int x;
    int i;
    scanf("%d",&x);
    for(i=0;i<9;i++){
        printf("%d %d\n",a[i],x/a[i]);
        x -=a[i] * (x/a[i]); 
    }
    return 0;
}