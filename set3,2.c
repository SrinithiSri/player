#include <stdio.h>

int main()
{
    int n,k,i,c;
    scanf("%d%d",&n,&k);
    if(n>k)
    {
        c=n;
    }
    else
    {
        c=k;
    }
    for(i=c;i>=2;i--)
    {
        if(n%i==0 && k%i==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}
