#include<stdio.h>
#include<stdlib.h>
void f()
{
	putchar(' ');
	char c;
	while(1)
	{
		c=getchar();
		if(c==EOF) exit(0);
		if(c!=' ') break;
	}
	putchar(c);
}

int main()
{
	char c;
	while((c=getchar())!=EOF)
	{
		if(c==' ') f();
		else putchar(c);
	}
}