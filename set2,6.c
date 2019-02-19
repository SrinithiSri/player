#include <stdio.h>
int main()
{
    int n,i,j,c,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       c=0;
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j]&&i!=j)
           {
               c=c+1;
           }
       }
                      if(c==0)
           {
               printf("%d",a[i]);
           }
           
    }
            return 0;
}
