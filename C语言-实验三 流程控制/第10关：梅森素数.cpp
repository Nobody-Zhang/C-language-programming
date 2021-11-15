#include<stdio.h>

int f(int x)
{
	int ans=1;
	while(x--)
	{
		ans<<=1;
	}
	return ans-1;
}

int judge(int x)
{
	for(int i=2;i*i<=x;i++) if(x%i==0) return 1;
	return 0;
}

int main()
{
	int m;
	scanf("%d",&m);
	for(int i=2;1;i++)
	{
		int tmp=f(i);
		if(tmp>m) return 0;
		if(judge(tmp)) continue;
		printf("M(%d)=%d\n",i,tmp);
	}
}