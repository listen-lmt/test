#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("���������ˮ�߹���\n����:����100w����˿\n����:��˿��ƺ�");
	int quantity = 1;
	while (quantity< 1000000)
	{
		printf("��������˿,quantity=%d\n", quantity);
		quantity++;
	}
	printf("��ɹ�������100w����˿����óƺš���˿��");
	return 0;
}