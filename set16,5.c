#include <stdio.h>
int main()
{
    int  a[10000],n,i,j,k,temp;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
        printf("%d ",a[i]);
    }
    for(i=k;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }    
        }
  printf("%d ",a[i]);
    }
    return 0;
}
