#include<stdio.h>
int main()
{
	int i=10,n=0;
	for(;;)
	{
		if (i==n)//使用判断语句来结束循环 
		{
			printf("\n结束循环");
			break;
		}
		i--;//倒数 
		printf("%d",i);//987654321
	}
	return 0;
}
