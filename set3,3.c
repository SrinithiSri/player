#include <stdio.h>

int main()
{
    int a[50],i,j,n,k,p,max=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    while(j<p)
    {
        scanf("%d",&k);
        a[n]=k;
        n++;
        for(i=0;i<n;i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
            }
        }
        printf("%d ",max);
        j++;
    }

    return 0;
}
