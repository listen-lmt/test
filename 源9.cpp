#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//悬空else问题
int main()
{
	int a = 1;
	int b = 2;
	if (a == 2)
	{
		if (b == 3)
			printf("hehe\n");
	}
	else//else只会与最近的那个if匹配，这种编译风格差的
		//因为我们会下意识以为与这个else匹配的是第一个if
		//实际上是与第二个if匹配，这样的逻辑下来，代码什么也不打印
		//如果要与第一个匹配就必须加{}
			printf("haha\n");
	return 0;
}