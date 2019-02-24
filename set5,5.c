#include <stdio.h>
int main()
{
    int peri,area,i,j,perimeter,area1,flag=0;
	scanf("%d %d",&peri,&area);
	for(i=1;i<=(peri/2);i++)
	{
	    for(j=1;j<=(peri/2);j++)
	{
	    perimeter=2*(i+j);
	    area1=i*j;
	    if(perimeter==peri && area1==area)
	    {
	        flag=1;
	        break;
	    }
	}
	}
	if(flag==1)
	{
	    printf("yes");
	}
	if(flag==0)
	{
	    printf("no");
	}
	
	return 0;
}
