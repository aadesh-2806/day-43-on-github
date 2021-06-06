#include<stdio.h>
#include<math.h>

void main()
{
	int i,a[50],s,t,n,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	i=0;
	for(s=n;s!=0;i++)
	{	
		a[i]=s%10;
		s=s/10;
	}
	
	for(s=0;s<i;s++)
	{
		for(t=0;t<(i-s)-1;t++)
		{
			r=a[t];
			a[t]=a[t+1];
			a[t+1]=r;
		}
	}
	
	for(s=0;s<i;s++)
	{	
		printf("%c",95+a[s]);
	}
	printf(" ");
	
	for(s=0;s<i;s++)
	{
		for(t=0;t<i;t+=2)
		{
			if(t!=i-1)
			{
				x=a[t]*10+a[t+1];
			}
			else
			{
				x=a[t];
			}
			printf("%c",95+x);
		}
	}
	printf(" ");
	getch();
}
