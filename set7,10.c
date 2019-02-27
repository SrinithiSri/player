#include <stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char a[10000],b[6]="Answer";
    scanf("%s",a);
    l=strlen(a);
    a[l]=' ';
    l++;
    for(i=0;b[i]!='\0';i++)
    {
        a[l]=b[i];
        l++;
    }
    puts(a);
  return 0;
}
