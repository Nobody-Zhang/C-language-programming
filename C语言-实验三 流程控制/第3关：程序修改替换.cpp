#include<stdio.h>
int main()
{
	int i,x,k,flag=0;
//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while(scanf("%d",&x)!=EOF){
		flag=0;i=2;
		do{
			if(x%i==0){
				flag=1;
				break;
			}
			i++;
		}while(i*i<=x);
		if(flag==1) printf("%d是合数",x);//=和==
		else printf("%d不是合数",x); 
	}
	return 0;
}