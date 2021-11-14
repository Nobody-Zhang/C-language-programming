#include<stdio.h>

int judge(int x)
{
	if(x==1) return 0;
	for(int i=2;i*i<=x;i++)
		if(x%i==0) return 1;
	return 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	int beg,en;
	if(n==2) beg=10,en=99;
	if(n==3) beg=100,en=999;
	if(n==4) beg=1000,en=9999;
	for(int i=beg;i<=en;i++)
    {
        int j=i,flag=0;
        while(j)
        {
            if(!judge(j))
            {
                flag=1;
                break;
            }
            j/=10;
        }
        if(!flag) printf("%d ",i);
    }
    return 0;
}