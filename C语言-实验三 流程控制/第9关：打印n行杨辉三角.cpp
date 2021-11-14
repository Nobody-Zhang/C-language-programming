#include<stdio.h>
int cp[1001][1001];
void kg(int x)
{
	for(int i=1;i<=x;i++)
		printf(" ");
}
void f(int x)
{
	if(x>=100) printf(" ");
	else if(x>=10) printf("  ");
	else printf("   ");
}
int main()
{
	int x;
	scanf("%d",&x);
	x++;
	for(int i=1;i<=x;i++)
		cp[i][1]=1;
	for(int i=1;i<=x;i++)
		for(int j=2;j<=i;j++)
			cp[i][j]=cp[i-1][j]+cp[i-1][j-1];
//	for(int i=1;i<=x;i++)
//	{
//		for(int j=1;j<=i;j++)
//			printf("%d ",C[i][j]);
//		printf("\n");
//	}
	for(int i=1;i<=x;i++)
	{
		kg(2*x-2*i);//输出空格
		for(int j=1;j<=i;j++)
			printf("%d",cp[i][j]),f(cp[i][j]);
		if(i<=x-1) printf("\n");
	}
}