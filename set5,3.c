#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[20],b[20];
	int i,flag=1;
	scanf("%s %s",a,b);
	for(i=0;str2[i]!='\0';i++)
	{
		if(b[i]=='b'||b[i]=='a'||b[i]=='n'||b[i]=='a'||b[i]=='n'||b[i]=='a')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
