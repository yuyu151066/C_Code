#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void PrintMenu();
void game();

//全局变量，记录每局游戏开始的时间
time_t game_start_time = 0;

//游戏菜单
int main()
{
	//把时间作为rand函数的种子，防止出现短时间内多次运行，产生相同随机数的情况
	srand((unsigned)time(NULL));

	int UserSelect = 0;
	do
	{
		PrintMenu();

		//判断玩家的选择
		printf("请输入选项：");
		scanf("%d", &UserSelect);

		switch (UserSelect)
		{
		case 1:
			game();
			break;
		case 2:
			printf("游戏已退出\n");
			UserSelect = 0;
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (UserSelect);

	return 0;
}

//此menu函数用于打印游戏菜单
void PrintMenu()
{
	printf("-------------------\n");
	printf("-----1.开始游戏-----\n");
	printf("-----2.退出游戏-----\n");
	printf("-------------------\n");
}

//此game函数用于实现游戏功能
void game()
{
	//创建mine和show数组，分别存储雷的信息和排雷的信息
	char mine[HANGS][LIES];
	char show[HANGS][LIES];

	//给mine和show初始化，零表示不是雷，一表示是雷
	ArrayInit(mine, '0');
	ArrayInit(show, '*');

	//向mine数组中随机布置雷
	MineSetRandom(mine, HANG, LIE);

	//打印游戏区域
	PrintArray(mine, HANG, LIE);
	PrintArray(show, HANG, LIE);

	//排雷
	//记录游戏开始时间，用于计时功能
	game_start_time = time(NULL);
	FindMine(mine, show, HANG, LIE);





}