#include <stdio.h>
#include<string.h> 
int main() 
{
char s[50],k;
int i,j,count=0,max=0,l;
printf("enter the string");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
    count=1;
    if(s[i]=='+')
    {
    continue;
}
for(j=i+1;j<l;j++)
{
    if(s[i]==s[j])
{
count++;
s[j]='+';
}
}
if(count>=max)
{
max=count;
k=s[i];
}
}
printf("\n %c",k);
return 0;
}
