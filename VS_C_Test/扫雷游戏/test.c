#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu();
void game();

int main()
{

	//把系统时间设定为rand函数的种子，防止多次运行，随机数相同
	srand((unsigned)time(NULL));

	//游戏主菜单
	int input = 0;
	do 
	{
		menu();
		printf("请输入：");
		scanf("%d",&input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}

void menu()
{
	printf("------------------------\n");
	printf("---------1.play---------\n");
	printf("---------0.exit---------\n");
	printf("------------------------\n");
}

void game()
{
	//创建存储数据的数组
	//mine数组记录埋雷的位置 - 不能给玩家看
	//show数组记录排查出的雷的信息
	char mine[YS][XS];
	char show[YS][XS];

	//初始化游戏区域
	InitBoard(mine,XS,YS,'0');
	InitBoard(show,XS,YS,'*');

	//布置雷
	SetMine(mine,X,Y);

	//打印游戏区域
	//DisplayBoard(mine, X, Y);
	DisplayBoard(show, X, Y);

	//排查雷
	FindMine(mine,show,X,Y);
}

