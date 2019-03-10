#include <stdio.h>
int main()
{
    int n,a[100],i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
