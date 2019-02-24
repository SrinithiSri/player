#include <stdio.h>
int main() 
{
int n,k,count=0,rem;
scanf("%d",&n);
scanf("%d",&k);
while(n>0)
{
    rem=n%10;
    if(rem==k)
    {
        count++;
    }
    n=n/10;
}
printf("%d",count);
return 0;
}
