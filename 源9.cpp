#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����else����
int main()
{
	int a = 1;
	int b = 2;
	if (a == 2)
	{
		if (b == 3)
			printf("hehe\n");
	}
	else//elseֻ����������Ǹ�ifƥ�䣬���ֱ�������
		//��Ϊ���ǻ�����ʶ��Ϊ�����elseƥ����ǵ�һ��if
		//ʵ��������ڶ���ifƥ�䣬�������߼�����������ʲôҲ����ӡ
		//���Ҫ���һ��ƥ��ͱ����{}
			printf("haha\n");
	return 0;
}