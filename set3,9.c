#include<stdio.h>
int main()
{
   int a,b,i,j,c=0;
   scanf("%d",&a);
   scanf("%d",&b);
   for(i=a;i<=b;i++)
   {
       for(j=1;j<=i/2;j++)
       {
           if(i%j==0&&j*j==i)
           {
               c++;
           }
       }
   }
   printf("%d",c);
return 0;
}
