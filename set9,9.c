#include<stdio.h>
int main()
{
    int n,k,i,l=1,l1=1;
    float t;
    scanf("%d",&n);
    scanf("%d",&k);
    if(k<=n&&k<=10)
    {
        for(i=1;i<=n;i++)
        {
            l=l*i;
        }
        for(i=1;i<=(n-k);i++)
        {
            l1=l1*i;
        }
        t=l/l1;
        printf("%.0f",t);
    }
    
    return 0;
}
