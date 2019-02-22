#include<stdio.h>
int main()
{
    int k,i,len1=0,len2=0,count1=0,count2=0;
    char a[50],b[50];
    scanf("%s%s",a,b);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        len2++;
    }
    if(len1<100000&&len2<100000)
    {
        for(i=0;i<len1;i++)
        {
        if(a[i]==b[i])
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    }
    if(count2==k)
    {
        printf("yes");
    }
    else
    {
         printf("no");
    } 
return 0;
}
