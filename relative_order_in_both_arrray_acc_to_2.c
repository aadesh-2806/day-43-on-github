#include<stdio.h>
#include<math.h>

void main()
{	
	int i,b[100],a[50][50],c[50],n,j,t,r,y;
	
	printf("hello\n");

	for(i=0;i<2;i++)
	{
		printf("enter number of values=");
		scanf("%d",&b[i]);	
		for(j=0;j<b[i];j++)
		{
			printf("enter %d=",j+1);
			scanf("%d",&a[i][j]);
		}					
	}
	
	t=0;
	for(i=0;i<b[1];i++)
	{
		for(j=0;j<b[0];j++)
		{
			if(a[1][i]==a[0][j])
			{
				c[t++]=a[0][j];
			}
		}
	}
	y=t;
	for(i=0;i<b[0];i++)
	{
		r=0;
		for(j=0;j<b[1];j++)
		{
			if(a[1][j]!=a[0][i])
			{
				r++;
			}
		}
		if(r==b[1])
		{
			c[t++]=a[0][i];
		}
	}
	for(i=y;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(c[i]>c[j])
			{
				r=c[j];
				c[j]=c[i];
				c[i]=r;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d ",c[i]);
	}
	getch();
}
