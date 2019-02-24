#include <stdio.h>
int main()
{
    char a[50];
    int i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i]='+';
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]!='+')
    {
        printf("%c",a[i]);
    }
}
 return 0;
}
