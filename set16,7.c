#include <stdio.h>
int main()
{
    int num,num1,num2,i,a[100],j=0,pos,rem;
    scanf("%d%d",&num1,&num2);
    num=num1*num2;
    while(num)
    {
        rem=num%2;
        a[j]=rem;
        j++;
        num=num/2;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]==1)
        {
            pos=i;
            break;
        }
    }
    printf("%d",pos+1);
    return 0;
}
