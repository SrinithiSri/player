#include <stdio.h>
int main()
{
    int i,j=0,c=0;
    char a[100000];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        j++;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]=='a'||a[i]=='b')
        {
            c++;
        }
    }
    if(c==j||c==j-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
