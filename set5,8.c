#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    if(1<=n<=1000)
    {
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
            }
        }
    }
    }
    return 0;
}
