#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;//这个break可以不写，但当你或其他人想添加更多的情况时，可能会出现逻辑上的错误
		//因此好的编程习惯是要写上去的
	default:
		printf("输入错误\n");
	}
	return 0;
}