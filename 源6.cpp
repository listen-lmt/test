#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	printf("��������˿\n");
	printf("��Ҫ��Ҫ�úô���˿��(1/0)>:");
	scanf("%d", &a);
	if (a == 0)
		printf("��Ϊ����");
	else
		printf("����Ϊ����˿֮��");
	return 0;
}