#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//这两个常量表示游戏区域的长和宽
#define HANG 9
#define LIE 9
//实际区域向外扩一圈，防止排雷时越界
#define HANGS HANG + 2
#define LIES LIE + 2
//布置雷的个数
#define MINE_NUMBER 10

//声明ArrayInit函数
void ArrayInit(char arr[HANGS][LIES], char ch);

//声明PrintArray函数
void PrintArray(char arr[HANGS][LIES], int hang, int lie);

//声明MineSetRandom函数
void MineSetRandom(char arr[HANGS][LIES], int hang, int lie);

//声明FindMine函数
void FindMine(char mine[HANGS][LIES], char show[HANGS][LIES], int hang, int lie);

//外部变量，记录游戏开始的时间戳
extern time_t game_start_time;
