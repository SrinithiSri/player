#include<stdio.h>
int main()
{
    int n,a[100],i,j,temp,min;
    scanf("%d",&n);
    if(n<=1000000)
    {
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        min=a[1]-a[0];
        printf("%d",min);
    }
    return 0;
}

