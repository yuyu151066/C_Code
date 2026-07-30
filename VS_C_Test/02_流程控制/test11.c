#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//给你一个非负整数x,计算并返回x的算术平方根。
//结果只保留整数部分,小数部分将被舍去。

//思路：从1开始逐个找自身相乘，找到第一个大于x的数
int main11() {
	int x = 0;
	scanf("%d", &x);

	//从1开始逐个测试
	//注意！！！此语句必须写在循环的外面，否则每次进入循环i都会被重新赋值成1。
	int i = 1;

	while (1) {
		

		if (i * i > x) {
			printf("%d的算数平方根（小数部分舍弃）为%d", x, i - 1);
			break;
		}
		i++;
	}















}

