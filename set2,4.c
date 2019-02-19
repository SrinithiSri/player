#include <stdio.h>
int main()
{
   int n,i,l,j=0;
   char a[50],b[50];
   scanf("%d",&n);
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
  if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
   {
       b[j]=a[i];
       j++;
   }
   }
   for(i=j-1;i>=0;i--)
   {
  
       printf("%c",b[i]);
   }
  
    return 0;
}
