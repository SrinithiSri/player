#include <stdio.h>

int main()
{
    char s[50],i,c=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            c=1;
        }
        else
        {
          c=0;
          break;
        }
    }
    if(c==1)
    {
       printf("yes"); 
    }
    else
    {
        printf("no");
    }

    return 0;
}
