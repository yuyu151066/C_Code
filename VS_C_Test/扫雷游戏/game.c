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

//定义DispalyBoard函数，此函数用于打印游戏区域
void DispalyBoard(char arr[YS][XS],int x,int y)
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
SetMine(char arr[YS][XS], int x, int y)
{

	//每次随机选一个x和一个y，埋下雷，一共埋count个
	int count = COUNT;
	while (count)
	{
		int RandX = rand() % X + 1;	//RandX的随机范围是1~9
		int RandY = rand() % Y + 1;	//RandY的随机范围是1~9

		if (arr[RandY][RandX] == '0')
		{
			arr[RandY][RandX] = '1';
			count--;
		}
	}
}
