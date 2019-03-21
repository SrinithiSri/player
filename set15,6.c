#include <stdio.h>
int main()
{
    int a,b,c,fact=1,fact1=1,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    for(i=1;i<=b;i++)
    {
        fact1=fact1*i;
    }
    c=fact/fact1;
    printf("%d",c);
    return 0;
}
