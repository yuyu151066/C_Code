#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Main() {
	int minutes = 0;

	//while循环用于让程序一直执行
	while (1) {
		scanf("%d", &minutes);

		if (minutes <= 1) {
			printf("秒回，有戏\n");
		}
		else if (minutes <= 10) {
			printf("还行，ta可能在忙\n");
		}
		else if (minutes <= 60) {
			printf("ta可能没看到信息\n");
		}
		else {
			printf("没戏了\n");
		}
	}

}