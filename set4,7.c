 #include <stdio.h>
int main()
{
    
 int n,i,s,k,c=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d%d",&s,&k);
     if(s<k)
     {
         c++;
     }
 }
 printf("%d",c);
 
    return 0;
}
