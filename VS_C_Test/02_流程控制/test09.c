#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//需求:世界最高山峰是珠穆朗玛峰(8844.43米 = 8844430毫米),假如我有一张足够大的纸,它的厚度是0.1毫米。
//请问,我折叠多少次,可以折成珠穆朗玛峰的高度 ?

int main09() {
	//纸的厚度
	double zhi = 0.1;

	//珠穆朗玛峰的厚度
	int a = 8844430;

	//计数器统计折了多少次
	int x = 0;

	while (zhi < a) {
		zhi = zhi * 2;
		x++;
	}

	printf("折叠了%d次", x);

	return 0;
}