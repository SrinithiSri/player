#include <stdio.h>
int main()
{
int n,i,j,mul=1,temp=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     for(j=i;j>0;j--)
     {
         mul=mul*2;
         if(mul==n)
         {
             temp=1;
             break;
         }
     }
 }
 if(temp==1)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }

    return 0;
}
