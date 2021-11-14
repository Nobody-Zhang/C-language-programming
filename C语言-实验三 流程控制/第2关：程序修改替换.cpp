#include<stdio.h>
int main()
{
	int i,x,k,flag=0;
//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while(scanf("%d",&x)!=EOF){
		flag=0;
		for(i=2; i*i<=x; i++)
			if(x%i==0){
				if(flag==0)printf("%d是合数",x);
				flag=1;
			}
		if(flag==0)printf("%d不是合数",x); 
	}
	return 0;
}