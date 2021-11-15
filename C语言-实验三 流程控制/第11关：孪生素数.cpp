#include<stdio.h>
int used[100001];
int main()
{
	int m;
	scanf("%d",&m);
	used[0]=used[1]=1;
	for(int i=2;i<=m;i++)
	{
		if(used[i]==0)
		{
			if(used[i-2]==0) printf("(%d,%d) ",i-2,i);
			for(int j=2;j*i<=m;j++)
				used[i*j]=1;
		}
		else continue;
	}
}