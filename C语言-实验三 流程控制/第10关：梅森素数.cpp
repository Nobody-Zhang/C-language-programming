#include<stdio.h>

int pow(int a,int k)
{
	int ans=1;
	while(--k)
	{
		ans*=a;
	}
	return ans;
}

int main()
{
	int x;
	scanf("%d",&x);
	for(int i=1,j=pow(2,i)-1;j<=x;i++)
	{
		
	}
}