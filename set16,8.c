#include <stdio.h>
int main()
{
    int a,b,c,arr[100000],j,s=0,c1=0,rem,i=0;
    scanf("%d%d",&a,&b);
    c=a*b;
    while(c)
    {
        rem=c%2;
        c=c/2;
        arr[i]=rem;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        s++;
        if(arr[j]==1)
        {
            c1++;
        }
        if(c1==2)
        {
            printf("%d",s);
            break;
        }
       }
    return 0;
}
