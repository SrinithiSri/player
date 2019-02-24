#include <stdio.h>
int main()
{
    long int num,i,k,a[100],j,t;
    scanf("%ld %ld",&num,&k);
    if(1<= num<= 100000)
    {
    for(i=0;i<num;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<k;i++)
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
    printf("%ld",a[k-1]);
    }
return 0;
}
