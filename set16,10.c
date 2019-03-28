#include <stdio.h>
int main()
{
   int n,a[100],i,j=0,count=0,rem,num1,num2;
   scanf("%d %d",&num1,&num2);
   n=num1|num2;
   while(n)
   {
       rem=n%2;
       a[j]=rem;
       j++;
       n=n/2;
   }
   for(i=0;i<j;i++)
   {
       if(a[i]==1)
       {
           count++;
       }
   }
   printf("%d",count);
    return 0;
}
