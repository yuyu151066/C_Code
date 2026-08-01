#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Add.h"

int main01()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	//函数调用
	int c = Add(a, b);
	
	printf("%d\n", c);
	return 0;
}


