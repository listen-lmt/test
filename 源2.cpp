#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//sizeofһ�ֲ��������������С
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	//sizeof�󵽵���ֵ��λΪ�ֽ�
	//���͵�ϸ����Ϊ�˽�ʡ�ռ�
	return 0;
}