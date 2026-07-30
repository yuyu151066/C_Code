#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1.游戏提供⼀个菜单(1 - 玩游戏，0 - 退出游戏)
//2.选择1，电脑⾃动⽣成1~100的随机数，进⼊猜数字游戏的环节。
//3.玩家猜数字，猜数字的过程中，根据猜测数字的⼤⼩给出⼤了或⼩了的反馈，直到猜对，游戏结束。
//4.玩⼀次如果不过瘾，可以选择继续玩。

void game() {

	printf("游戏开始！\n");
	printf("输入你猜的数字吧：\n");

	//生成1~100的随机数
	int com_num = rand() % 100 + 1;

	//保存玩家输入的数字
	int player_num = 0;

	//判断大了还是小了，猜不对就一直猜
	while (player_num != com_num) {
		//输入语句放在循环里面就可以重复输入不同数字
		scanf("%d", &player_num);

		if (player_num > com_num) {
			printf("猜大了，请继续猜：\n");
		}
		else if(player_num < com_num){
			printf("猜小了，请继续猜：\n");
		}
		else {
			printf("恭喜你！猜对了!!!\n");
		}
	}
}

int main07() {

	srand((unsigned int)time(NULL));

	int x = 1;
	while (x) {
		//打印游戏菜单页
		printf("------------------------------\n");
		printf("          猜数字小游戏          \n");
		printf("1-玩游戏\n");
		printf("0-退出游戏\n");
		printf("------------------------------\n");

		//用switch判断输入的菜单选项
		int choice = 0;
		scanf("%d", &choice);

		switch (choice) {
		case 0:
			printf("游戏结束\n");
			x = 0;
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	}
	return 0;
}

