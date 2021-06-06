#include<stdio.h>
#include<math.h>

void main()
{	
	int i;
	char a[50];
	printf("hello\nenter string=");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='x')
		{
			i++;
		}
		if(a[i]=='\0')
		{
			break;
		}
		printf("%c",a[i]);
	}
	getch();
}
