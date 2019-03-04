#include <stdio.h>

int main()
{
    int n,a[50],i,j,count=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]=a[i+1])
            {
                if(a[i]<a[j])
                {
                    count++;
                    break;
                }
            }
        }
    }
    printf("%d",count);
    
    return 0;
}
