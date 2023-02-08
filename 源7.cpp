#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("你进入了流水线工厂\n任务:打造100w个螺丝\n奖励:螺丝神称号");
	int quantity = 1;
	while (quantity< 1000000)
	{
		printf("继续打螺丝,quantity=%d\n", quantity);
		quantity++;
	}
	printf("你成功打造了100w个螺丝，获得称号“螺丝神”");
	return 0;
}