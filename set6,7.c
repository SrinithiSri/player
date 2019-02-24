#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b;
    int i,n=0;
    scanf("%s %c",a,&b);
    for(i=0;a[i]!='\0';i++)
    {
            if(a[i]==b)
            {
            n++;
            }
    }
    printf("%d",n);
        return 0;
}
