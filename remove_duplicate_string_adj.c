#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,q;
	char a[50];
	printf("hello\nenter string=");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{
			printf("%c",a[i]);
			i+=2;
			continue;
		}
		printf("%c",a[i]);
	}
	getch();
}
