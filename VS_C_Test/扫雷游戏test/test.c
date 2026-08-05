#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void PrintMenu();

//把和游戏运行相关的代码都放到game.c文件中

//游戏菜单
int main()
{
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
			printf("开始游戏了\n");
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