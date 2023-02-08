#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (a < 101)
	{
		b = a % 2;
		if (b == 1)
			printf("%d\n", a);
		a++;
	}
	return 0;
}