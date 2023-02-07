#define _CRT_SECURE_NO_WARNINGS//使它具备可移植性
//newc++file.cpp文件vs2022版地址
//Program Files/Miceosoft Visual Studio/2022/Commumity/Common7/IDE/VC/VCProjectltems
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);//&取地址操作符
	printf("sum=%d\n", sum);
	return 0;
}