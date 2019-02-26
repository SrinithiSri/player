#include<stdio.h>
int main()
{
    int n,x,a[100],i,j,sum=0,c=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(sum==x)
            {
                c=1;
                break;
            }
            else
            {
                c=0;
            }
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
