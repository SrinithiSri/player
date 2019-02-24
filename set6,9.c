#include<stdio.h>
int main()
{
    int num,a[100],i,p=0,j=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>='2' && a[i]<='9')
        {
            break;
        }
       if(a[i]==0)
        {
            p=i;
            for(i=j;i<p;i++)
            {
            printf("%d ",a[i]);
            j=p+1;
            }
    
        }
    }
       
    
    return 0;
}
