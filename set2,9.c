 #include <stdio.h>

int main()
{
    
int i,j,n,temp=1;
scanf("%d",&n);
for(j=2;j<=n;j++)
{
    if(n%j==0)
    {
        temp=1;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                temp=0;
                break;
            }
        }
        if(temp=1)
        {
            printf("%d",j);
        }
    }
}

    return 0;
}
