#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//定义InitBoard函数，此函数用于初始化游戏区域
void InitBoard(char arr[YS][XS],int x,int y,char set)
{
	for (int i = 0;i < y;i++)
	{
		for (int j = 0;j < x;j++)
		{
			arr[i][j] = set;


		}
	}
}

//定义DisplayBoard函数，此函数用于打印游戏区域
void DisplayBoard(char arr[YS][XS],int x,int y)
{
	for (int j = 0;j <= x;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (int i = 1;i <= y;i++) 
	{
		printf("%d ",i);
		for (int j = 1;j <= x;j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//定义SetMine函数，此函数用于布置雷到mine数组中
void SetMine(char arr[YS][XS], int x, int y)
{

	//每次随机选一个x和一个y，埋下雷，一共埋count个
	int count = COUNT;
	while (count)
	{
		int RandX = rand() % x + 1;	//RandX的随机范围是1~9
		int RandY = rand() % y + 1;	//RandY的随机范围是1~9

		if (arr[RandY][RandX] == '0')
		{
			arr[RandY][RandX] = '1';
			count--;
		}
	}
}

//定义函数GetMineCount，此函数用于统计玩家输入的坐标周围一圈雷的个数，并把个数返回，此函数只在此类里使用，为不让外界调用，使用static修饰
static size_t GetMineCount(char mine[YS][XS], int x, int y)
{
	//数字字符 - '0' --强转为整型-> 对应的整型数字(ASCII码值：'0' -> 48,'1' - > 49) 
	//'0' - '0' = 0
	//'1' - '0' = 1
	return
		(mine[y - 1][x - 1] - '0') + (mine[y - 1][x] - '0') + (mine[y - 1][x + 1] - '0') +
		(mine[y][x - 1] - '0') + (mine[y][x + 1] - '0') +
		(mine[y + 1][x - 1] - '0') + (mine[y + 1][x] - '0') + (mine[y + 1][x + 1] - '0');
}

//定义FindMine函数，此函数用于排查雷
FindMine(char mine[YS][XS], char show[YS][XS], int x, int y)
{
	//设置flag标记变量，炸死以后把变量的状态改为true，值为false代表没炸死
	bool flag = false;

	//定义PlayingCount表示游戏过程中剩余雷的数量
	int PlayingCount = x * y - COUNT;
	while (PlayingCount > 0)
	{
		int playerX = 0;
		int playerY = 0;

		printf("请输入行要排查的坐标：");
		scanf("%d %d", &playerY,&playerX);
	
		//判断输入的坐标是否合法
		if (playerX >= 1 && playerX <= x && playerY >= 1 && playerY <= y)
		{
			//判断输入的坐标是否已经排查过了，show数组里还是*就表示没排查过
			if (show[playerY][playerX] == '*')
			{
				//判断输入的坐标是否有雷
				if (mine[playerY][playerX] == '0')
				{
					//进到这里表示此位置没有雷，获取周围一圈雷的个数
					size_t count = GetMineCount(mine, playerX, playerY);
					//把获取到的雷的个数，转换成字符类型，再记录到show数组中
					//整型数字 + '0' ---> 对应字符数字
					show[playerY][playerX] = (char)(count + '0');
					//排完雷打印出新的show数组
					DisplayBoard(show, X, Y);

					PlayingCount--;
				}
				else
				{
					printf("这里有雷，你被炸死了\n");
					DisplayBoard(mine, X, Y);
					flag = true;
					break;
				}
			}
			else
			{
				printf("这个地方已经排查过了\n");
			}
		}
		else
		{
			printf("输入的坐标超出游戏区域\n");
		}
	}
	//两种情况都可以结束while循环
	//通过标记变量flag判断代码是，全部排雷成功来到这里，还是被炸死了来到这里
	if (flag == false)
	{
		printf("恭喜你，游戏胜利\n");
	}


}
