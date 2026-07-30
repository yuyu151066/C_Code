#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//找出100~200之间的素数，并打印在屏幕上
//注：素数⼜称质数，只能被1和本⾝整除的数字

int main05() {
	//生成100~200之间的数字
	for (int i = 100;i <= 200;i++) {
		
		//状态值思想，这里的x的是0/1表示了i是否是素数
		//默认i是素数
		int flag = 1;
		//判断i是否为素数
		for (int j = 2;j < i;j++) {
			if (i % j == 0) {
				//进到此if表示发现了有一个数可以整除i，则i不是一个素数
				//此时应该修改状态值flag的值，让其表示为0，即i不是一个素数
				flag = 0;
				//发现了i不是一个素数，这个i就没必要再测了，直接break跳出循环
				break;
			}
		}
		//代码运行到这，有2种情况：
		//1.break --> i不是素数
		//2.循环完也没发现可以整除i的数 --> i是素数
		if (flag) {
			printf("%d\n", i);
		}
	}

	return 0;
}