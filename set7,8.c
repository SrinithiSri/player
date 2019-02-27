#include <stdio.h>
int main()
{
  int n,a[50],i,j,max=0,count=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      count=1;
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              count++;
              a[j]='$';
          }
      }
      if(max<count)
      {
          max=count;
      }
      
  }
printf("%d",max);
    return 0;
}
