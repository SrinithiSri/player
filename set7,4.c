#include <stdio.h>
int main()
{
    int n,k,a[100],i,j;
    scanf("%d%d",&n,&k);
    if(1<=n<=100000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<k;i++)
    {
       for(j=0;j<n;j++)
       {
           if(i==a[j])
           {
               printf("%d ",i);
           }
       }
    }
    }
    return 0;
}
