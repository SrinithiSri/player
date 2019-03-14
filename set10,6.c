#include <stdio.h>
int main()
{
    long int n,t,l=1;
    int sum,rem,a,b;
    scanf("%ld",&n);
    t=n;
    while(t>0)
    {
        t=t/10;
        l=l*10;
    }
    l=l/10;
        a=n/l;
        b=n%10;
        sum=a+b;
    printf("%d ",sum);
    return 0;
}
