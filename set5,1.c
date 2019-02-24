#include <stdio.h>

int main()
{
 int n,k,i,pow=1,temp=0;
 scanf("%d%d",&n,&k);
 for(i=1;i<n/2;i++)
 {
     pow=pow*k;
     if(n==pow)
     {
         temp=1;
         break;
     }
     else
     {
         temp=0;
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

