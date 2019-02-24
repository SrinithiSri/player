#include <stdio.h>

int main()
{
   int i,n=0;
   char a[30];
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       n++;
   }
   for(i=0;i<n;i=i+3)
   {
       printf("%c",a[i]);
   }
    return 0;
}
