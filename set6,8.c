#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100],b[50],c[10];
    int i,k=0,n=0,l,j=0;
    gets(arr);
    scanf("%s",b);
    l=strlen(b);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!=' ')
        {
            c[k]=arr[i];
            k++;
        }
        if(c[k]==b[k])
            {
                    n++;
            }

        if(arr[i]==' ')
        {
            for(i=0;i<k;i++)
            {
                c[k]='\0';
            }
            k=0;
        }
            if(n==l)
            {
                j++;
            }
    }
          printf("%d",j); 
            return 0;
}
