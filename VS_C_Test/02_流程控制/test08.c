#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//给你一个整数n，判断该整数是否是2的幂次方

int main08() {
	int n = 0;
	scanf("%d", &n);

	//用2一直除n，写个while循环。
	//循环结束的连个条件：
	//1.除到最后n等于1，说明n是2的幂次方，输出yes。
	//2.除到n不能再被2整除，说明n不是2的幂次方，输出no。
	//小括号里写的是什么时候循环可以继续进行，和上面要反着写。

	while (n != 1 && n % 2 == 0) {
		n = n / 2;
	}

	//通过n最后的值，判断n是不是2的幂次方
	if (n == 1) {
		printf("yes");
	}
	else {
		printf("no");
	}


}