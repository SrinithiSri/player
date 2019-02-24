#include<stdio.h>
int main()
{
int i,l=0,c1=0,c2=0;
    char a[50];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]=='(')
        {
            c1++;
        }
        else if(a[i]==')'
        {
            c2++;
        }
    }
    if(c1==c2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
    }
