#include <stdio.h>
int main()
{
int i;
char a[20];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    printf("%c",a[i]+3);
}

    return 0;
}
