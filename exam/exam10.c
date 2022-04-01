#include <stdio.h>

int circle(int a[], int n){
    int nav = 0;
    int sum ;
    int i;

    for( i = 1;i<n;i++){
        sum = a[i-1] + a[i];
        
        if (sum%2 == 0) {
            a[i-1]=a[i]=sum/2;
            
        } else{
            a[i-1]=a[i]=(sum-1)/2;
            nav++;
        }
    }
    for(i=0;i<n;i++){
        printf("qa[i] %d\n",a[i]); 
    }
     printf("ai %d a0 %d\n",a[n-1],a[0]);
    if((a[n-1]+a[0])%2 == 0){
        a[n-1]=a[0]=(a[n-1]+a[0])/2;
    }else{
       a[n-1]=a[0]=(a[n-1]+a[0]-1)/2;
       nav++;  
    }
  
    for(i=0;i<n;i++){
        printf("a[i] %d\n",a[i]);
    }
    printf("nav %d\n",nav);  
    return nav;
}

int equality(int a[],int n){
    int i;
    int lohi= 0;
    for(i=1;i<n;i++){
        if(a[i-1] != a[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[100];
    int eq=0;
    int cup=0;
    int i;
    int n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       
    }
    while( equality(a,n)){
        cup += circle(a,n);
    }

    
    printf("%d %d\n",cup,a[0]);
    return 0;
}
