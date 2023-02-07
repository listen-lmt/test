#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
int main()
{
	//数据类型是用来向内存申请空间的
	//char-字符类型
	//short-短整型
	//int-整型
	//long-长整型
	//long long-更长的整型
	char ch = 'a';
	printf("%c\n", ch);
	short q = 8;
	printf("%d\n", q);
	float w = 3.14;
	printf("%f\n", w);
	//%d-打印整型
	//%c-打印字符
	//%f-打印浮点数字-打印小数（单精度）
	//%lf-打印双精度数字
	//%p-打印地址
	//%s-打印字符串
	//%x-打印16进制数字
	return 0;
}