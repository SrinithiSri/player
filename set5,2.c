#include<stdio.h>
int main()
{
    int n,s[50],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
