#include <stdio.h>

int main()
{
    char a[50];
    int i,l=0;
    scanf("%s",&a[i]);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    a[l]='.';
    for(i=0;i<=l;i++)
    {
    printf("%c",a[i]);
    }
    return 0;
}
