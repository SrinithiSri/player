#include <stdio.h>
int main()
{
    int a,b,i,c=1;
    scanf("%d",&a);
    scanf("%d",&b);
    if((a>=1&&a<=50)&&(b>=1&&b<=50))
    {
        for(i=1;i<=b;i++)
        {
            c=c*a;
        }
    }
    printf("%d",c);

    return 0;
}
