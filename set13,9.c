#include <stdio.h>
int main()
{
   int n,i,j,a[100000],sum=0,min=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   if(n==1)
   {
       printf("%d",&a[n-1]);
   }
   else
   {
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               sum=sum+a[j];
           }
           if(min>sum)
   {
      min=sum; 
   }
       }
       printf("%d",min);
   }
   return 0;
}
