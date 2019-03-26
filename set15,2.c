#include <stdio.h>
#include <string.h>
int main()
{
 int n,h,i,j,k,l,m,count=0,flag=0,s;
 char a[100][100];
 scanf("%d%d",&n,&h);
 for(i=0;i<n;i++)
 {
     scanf("%s",a[i]);
 }
 for(i=0;i<n;i++)
 {
     s=1;
     l=strlen(a[i]);
     for(j=i+1;j<n;j++)
     {
         m=strlen(a[j]);
         if(l==m)
         {
             for(k=0;k<m;k++)
             {
                 if(a[i][k]==a[j][k])
                 {
                     count++;
                 }
             }
             if(count==m)
             {
                 s++;
             }
         }
     }
     if(s==h)
     {
         flag=1;
         break;
     }
     else
     {
         flag=0;
     }
 }
 if(flag==1)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
return 0;
}
