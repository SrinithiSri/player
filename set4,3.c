#include <stdio.h>
int main()
{
int i,j,n,a[100][100],c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    if(a[i][j]==1)
{
    if(a[i][j-1]==0&&a[i][j+1]==0)
    {
        c++;
    }
}
}
}
printf("%d",c);
 return 0;
}
