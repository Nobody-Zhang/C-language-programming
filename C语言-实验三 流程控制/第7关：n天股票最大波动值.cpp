#include<stdio.h>
#include<math.h>

int max(int a,int b)
{
	return a>b? a:b;
}

int main()
{
	int x;
	scanf("%d",&x);
	int a[1001],maxx=-1;
	for(int i=1;i<=x;i++)
	{
		scanf("%d",&a[i]);
		if(i>=2) maxx=max(maxx,abs(a[i]-a[i-1]));
	}
	printf("%d",maxx);
	return 0;
}