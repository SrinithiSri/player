#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    if(1<=n&&k<=1000)
    {
    n=n<<k;
    }
    printf("%d",n);
    return 0;
}
