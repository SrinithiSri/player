#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {                           
        if(n%i==0)
        {
            k=n/i;
            if(k%2!=0)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return o;
}
