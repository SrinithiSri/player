#include <stdio.h>
int main()
{
    int n,i,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            printf("%d ",a[i+1]);
        }
        else
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}
