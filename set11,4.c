#include<stdio.h>
int main()
{
    long int n,sum,i,d=0,a[100000],k;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum=a[i]+a[i+1];
        d=d+sum;
    }
    printf("%ld",d);
    return 0;
    
}
