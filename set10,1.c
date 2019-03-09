#include<stdio.h>
int main()
{
    long int n,bin=0,rem,pow=1;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*pow;
        pow=pow*10;
        n=n/2;
    }
    printf("%ld",bin);
    return 0;
}
