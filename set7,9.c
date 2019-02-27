#include <stdio.h>
int main()
{
  int n,a[50],i,j,k;
  scanf("%d",&n);
  scanf("%d",&k);
  if(1<=n<=100000&&1<=k<=100000)
  {
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=n;i>=(n-k);i--)
  {
      a[i]='\0';
  }
  for(i=0;i<n;i++)
  {
      if(a[i]!='\0')
      {
          printf("%d ",a[i]);
      }
  }
  } 
  return 0;
}
