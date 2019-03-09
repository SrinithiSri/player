#include<stdio.h>
int main()
{
    int n,k,i;
    float l;
    scanf("%d",&n);
    scanf("%d",&k);
    if(1<=n&&k<=1000)
    {
    l=n>>k;
    }
    printf("%.2f",l);
    return 0;
}
