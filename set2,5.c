#include <stdio.h>

int main()
{
    char a[50],b;
    int i,j,c=1,l=0,m=1;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            if(c>m)
            {
                m=c;
                b=a[i];
            }
        }
    }
    printf("%c",b);
    return 0;
}
