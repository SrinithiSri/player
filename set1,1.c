#include <stdio.h>

int main()
{
    char a[50];
    int i,l=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    if(l<=100000)
    {
    for(i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
