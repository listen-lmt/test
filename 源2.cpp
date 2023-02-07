#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//sizeof一种操作符，用来求大小
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	//sizeof求到的数值单位为字节
	//类型的细化是为了节省空间
	return 0;
}