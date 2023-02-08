#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	printf("进厂打螺丝\n");
	printf("你要不要好好打螺丝？(1/0)>:");
	scanf("%d", &a);
	if (a == 0)
		printf("成为蛀虫");
	else
		printf("进阶为打螺丝之王");
	return 0;
}