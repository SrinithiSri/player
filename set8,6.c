#include <stdio.h>
int main()
{
    int n,a[100],i,c=0,l=0,p,q;
    scanf("%d",&n);
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
        if(a[i]%2==0)
        {
           c++;
           p=i;
        }
        else
        {
            l++;
            q=i;
        }
    }
    }
    if(c>l)
    {
        printf("%d",a[q]);
    }
    else
    {
        printf("%d",a[p]);
    }
    return 0;
}
