#include <stdio.h>
int main()
{
   int num,num1,num2,a[100],i,j=0,count=0,rem;
   scanf("%d%d",&num1,&num2);
   num=num1*num2;
   while(num)
   {
       rem=num%2;
       a[j]=rem;
       j++;
       num=num/2;
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
