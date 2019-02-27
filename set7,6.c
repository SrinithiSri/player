#include <stdio.h>
int main()
{
    int n,k,a[100],i,j,c=1;
    scanf("%d%d",&n,&k);
    if(1<=n<10000&&1<=k<10000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==k)
    {
        printf("%d",a[i]);
        break;
    }
    c=1;
    }
    }
    return 0;
}
