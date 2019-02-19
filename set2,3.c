#include <stdio.h>
int main()
{
    int n,rem,sum=0,squ;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        squ=rem*rem;
        sum=sum+squ;
        n=n/10;
    }
    
    printf("%d",sum);
    return 0;
}
