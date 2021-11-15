#include<stdio.h>
int used[10],m;
int ans[3][6];//储存结果

void judge()
{
	int a1=0,a2=0;
	for(int i=1;i<=5;i++)
	{
		a1=a1*10+ans[1][i];
		a2=a2*10+ans[2][i];
	}
	if(a1/a2==m&&a1%a2==0)
	{
		for(int i=1;i<=5;i++)
			printf("%d",ans[1][i]);
		printf("/");
		for(int i=1;i<=5;i++)
			printf("%d",ans[2][i]);
		printf("=%d\n",m);
	}
}

void dfs(int k,int p)
{
	if(k==11)
	{
		judge();
		return;
	}
	for(int i=0;i<=9;i++)
		if(used[i]==0)
		{
			used[i]=1;
			ans[p][0]++;
			ans[p][ans[p][0]]=i;
			if(k>=5) dfs(k+1,2);
			else dfs(k+1,1);
			ans[p][0]--;
			used[i]=0;
		}
}
int main()
{
	scanf("%d",&m);
	dfs(1,1);
}