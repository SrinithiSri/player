#include<stdio.h>
#include<string.h>
int main()
{
int i,n,j;
char a[100][100],b[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%s",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(strlen(a[i])<strlen(a[j]))
        {
            strcpy(b,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],b);
        }
    }
}
for(i=1;i<=n;i++)
{
    printf("%s\n",a[i-1]);
    
}
}
