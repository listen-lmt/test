#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//c语言中有两种函数：1自定义函数（diy），2库函数(直接使用)
int F(int x, int y)//自定义函数：数据类型 函数名（函数元素的定义）
{
	int z = x + y;//函数表达式
	return z;//函数的结果
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