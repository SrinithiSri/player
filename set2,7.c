#include <stdio.h>

int main()
{
    int l,r,i,div,n;
    scanf("%d",&l);
    scanf("%d",&r);
    for(i=1;i<=l&&i<=r;i++)
    {
        if(l%i==0&&r%i==0)
        {
            div=i;
        }
    }
    n=(l*r)/div;
    printf("%d",n);
    return 0;
}
