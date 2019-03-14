#include<stdio.h>
int main()
{
    long int n,t,a[100],k=0,i,c=0,rem,j;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        a[k]=rem;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(a[i]==a[j])
            {
                c=1;
                break;
            }
            else
            {
                c=0;
            }
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}   
