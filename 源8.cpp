#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//c�����������ֺ�����1�Զ��庯����diy����2�⺯��(ֱ��ʹ��)
int F(int x, int y)//�Զ��庯������������ ������������Ԫ�صĶ��壩
{
	int z = x + y;//�������ʽ
	return z;//�����Ľ��
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 1;
	int sum1 = F(a,b);
	int sum2 = F(c, d);
	printf("sum1=%d\n", sum1);
	printf("sum2=%d\n", sum2);
	printf("sum1=%d\n", F(a, b));
	printf("sum2=%d\n", F(c, d));
}