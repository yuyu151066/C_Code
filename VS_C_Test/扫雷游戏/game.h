#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


#define X 9			//棋盘的列数
#define Y 9			//棋盘的行数
#define XS X + 2	//给正常游戏区外面加一圈，防止越界
#define YS Y + 2
#define COUNT 10	//埋雷的数量


//声明初始化游戏区的函数
void InitBoard(char arr[YS][XS], int x, int y, char set);

//声明打印游戏区的函数
void DisplayBoard(char arr[YS][XS], int x, int y);

//声明布置雷的函数
void SetMine(char arr[YS][XS],int x,int y);

//声明排查雷的函数
FindMine(char mine[YS][XS], char show[YS][XS], int x, int y);
