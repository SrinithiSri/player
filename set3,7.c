
#include <stdio.h>
int main()
{
char s[50];
int i;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]>96)
    {
        s[i]=s[i]-32;
    }
    else if(s[i]<91)
    {
        s[i]=s[i]+32;
    }
}
printf("%s",s);
    return 0;
}
