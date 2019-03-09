#include <stdio.h>
int main()
{
    int n,a[100],i,j,max=0,temp;
    scanf("%d",&n);
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++ )
        {
            for(j=0;j<n;j++)
            {
                temp=(a[i]&a[j]);
                if(temp>max)
                {
                    max=temp;
                }
                
            }
    
        }
        printf("%d",max);
        
    }

    return 0;
}
