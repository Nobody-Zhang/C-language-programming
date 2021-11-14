#include<stdio.h>

int pow(int a,int k)
{
	int ans=1;
	for(int i=1;i<=k;i++)
		ans*=a;
	return ans;
}

int turn(int x)
{
	int n=0,k=x,len=0;
	x*=x;
	while(k)
	{
		k/=10;
		len++;
	}
	x%=pow(10,len);
	return x;
}

int main()
{
	int x;
	scanf("%d",&x);
	for(int i=pow(10,x-1);i<=pow(10,x)-1;i++)
	{
		if(i==turn(i)) printf("%d ",i);
	}
	return 0;
}