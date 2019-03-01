#include<stdio.h>
int main()
{
    int n,a[100],i,max,pos=0;
    scanf("%d",&n);
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        max=a[0];
        for(i=0;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
                pos=i;
            }
        }
        if(max>a[pos+1])
        {
            printf("%d",max);
        }
        else
        {
            printf("it is not bitonic array");
        }
    }
}
