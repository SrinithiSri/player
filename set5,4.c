#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[100],arr2[100];
    int i,j=0,l,n,t;
    for(i=0;i<100;i++)
    {
        arr2[i]='\0';
    }
    scanf("%s",arr1);
    scanf("%d",&n);
    l=strlen(arr1);
    if(1<= l && n<= 100000)
    {
        for(i=l-n;i<l;i++)
        {
            arr2[j]=arr1[i];
            j++;
        }
        for(i=0;i<l-n;i++)
        {
            arr2[j]=arr1[i];
            j++;
        }
        printf("%s",arr2);
    }
    
        return 0;
    }
    
