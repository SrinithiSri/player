#include<stdio.h>
int main()
{
    int num,i,f=0;
    scanf("%d",&n);
    if(1<=num<=100000)
    {
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            f=1;
            break;
        }
        else
        {
            f=0;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
    }
    return 0;
}
