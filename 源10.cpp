#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;//���break���Բ�д�������������������Ӹ�������ʱ�����ܻ�����߼��ϵĴ���
		//��˺õı��ϰ����Ҫд��ȥ��
	default:
		printf("�������\n");
	}
	return 0;
}