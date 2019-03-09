#include<stdio.h>
int fact(int x);
int main()
{
    long int n,k,r;
    float t;
    scanf("%ld %ld",&n,&k);
    if(k<=n && k<=10)
    {
        r=n-k;
        n=fact(n);
        k=fact(k);
        r=fact(r);
        t=n/(k*r);
        printf("%.0f",t);
    }
    
    return 0;
}
int fact(int x)
{
   int f=1,i;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
} 
