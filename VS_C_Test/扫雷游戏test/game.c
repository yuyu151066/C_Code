#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//定义ArrayInit函数，此函数用于给数组初始化
void ArrayInit(char arr[HANGS][LIES], char ch)
{
	for (int i = 0;i < HANGS;i++)
	{
		for (int j = 0;j <LIES;j++)
		{
			arr[i][j] = ch;
		}
	}
}

//定义PrintArray函数，此函数用于打印游戏区域
void PrintArray(char arr[HANGS][LIES], int hang, int lie)
{
	//打印列号
	for (int i = 0;i <= lie;i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1;i <= hang;i++)
	{
		//打印行号
		printf("%d ", i);
		for (int j = 1;j <= lie;j++)
		{
			printf("%c ", arr[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
}

//定义MineSetRandom函数，此函数用于在mine数组中随机布雷
void MineSetRandom(char arr[HANGS][LIES], int hang, int lie)
{
	//计数器，记录剩余可放置雷的个数，要把count的雷数全放完
	int count = MINE_NUMBER;

	while (count > 0)
	{
		//行上随机一个数，列上随机一个数
		int HangSetMine = rand() % hang + 1;
		int LieSetMine = rand() % lie + 1;

		//所放位置上原先不是雷，才布置成功
		if (arr[HangSetMine][LieSetMine] == '0')
		{
			arr[HangSetMine][LieSetMine] = '1';
			count--;
		}
	}
}

//定义GetAroundMineCount函数，此函数用于统计周围8个格子中雷的数量，并且此函数只供于FindMine函数调用，不想被外界获取，使用static修饰
static  unsigned GetAroundMineCount(char mine[HANGS][LIES], int y, int x)
{
	return (mine[y - 1][x - 1] - '0') + (mine[y - 1][x] - '0') + (mine[y - 1][x + 1] - '0') + (mine[y][x - 1] - '0') + (mine[y][x + 1] - '0') + (mine[y + 1][x - 1] - '0') + (mine[y + 1][x] - '0') + (mine[y + 1][x + 1] - '0');
}

//定义FindMine函数，此函数用于排雷
void FindMine(char mine[HANGS][LIES], char show[HANGS][LIES], int hang, int lie)
{
	while (true)
	{
		//玩家输入排雷坐标
		int FindMineHang = 0;
		int FinfMineLie = 0;

		printf("请输入坐标：");
		scanf("%d %d", &FindMineHang, &FinfMineLie);

		//判断输入的坐标是否合法
		if (FindMineHang >= 1 && FindMineHang <= hang && FinfMineLie >= 1 && FinfMineLie <= lie)
		{

			//判断输入的坐标是否已经排查过了
			if (show[FindMineHang][FinfMineLie] == '*')
			{

				//判断输入的坐标是否是雷
				if (mine[FindMineHang][FinfMineLie] == '0')
				{
					//统计输入坐标周围的八个格子的雷的数量，并显示到输入的坐标的格子里
					//获取周边雷的数量
					int MineCount = (GetAroundMineCount(mine, FindMineHang, FinfMineLie) + '0');

					//在show数组中显示出来
					show[FindMineHang][FinfMineLie] = MineCount;

					//再打印一边show数组，使玩家看到变化
					PrintArray(show, HANG, LIE);

				}
				else
				{
					printf("此处是雷，你被炸死了\n");
				}
			}
			else
			{
				printf("输入的坐标已经排查过了\n");
			}
		}
		else
		{
			printf("输入的坐标超出范围\n");
		}
	}















}




