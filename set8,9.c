#include <stdio.h>
int main()
{
    int n,i,j,a[100],diff,max;
    scanf("%d",&n);
    if(n<=1000000)
    {
        for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            diff=a[i]-a[j];
            if(max>diff)
            {
                max=diff;
            }
        }
    }
    if(max<0)
    {
        max=-max;
    }
    else
    {
        max=max;
    }
    printf("%d",max);
    }
    
    return 0;
}
