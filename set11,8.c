#include<stdio.h>
int main()
{
    long int n,a[100000],i,j,sum=0,k;
    scanf("%ld",&n);
    if(n>=1 && n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            printf("%ld ",sum);
        }
    }
    return 0;
}
