#include <stdio.h>
int main()
{
    int n,a[100],i,j,temp;
    scanf("%d",&n);
    if(n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
       temp=a[0];
       for(i=0;i<n-1;i++)
       {
           temp=(temp|a[i+1]);
       }
    
       
    }
    printf("%d",temp);

    return 0;
}
