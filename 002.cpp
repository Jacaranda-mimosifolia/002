#include<stdio.h>
int main()
{
	int i=10,n=0;
	for(;;)
	{
		if (i==n)//ʹ���ж����������ѭ�� 
		{
			printf("\n����ѭ��");
			break;
		}
		i--;//���� 
		printf("%d",i);//987654321
	}
	return 0;
}
