#include <stdio.h>
int main()
{
    long int num,i,a[100],j,t;
    scanf("%ld",&n);
    if(1<= num<= 100000)
    {
    for(i=0;i<num;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<2;i++)
    {
     for(j=i+1;j<num;j++)
     {
         if(a[i]>a[j])
         {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
         }
      }
    }
    printf("%ld",a[1]);
    }
return 0;
}
