//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

//剪刀石头布游戏

/*
int main() {
	srand((unsigned int)time(NULL));

	//记录玩家的出招
	char player;
	printf("s - 石头\nj - 剪刀\nb - 布\n");
	scanf("%c", &player);

	//生成电脑的出招
	char computer;
	int x = rand() % 3;
	switch (x) {
	case 0:
		computer = 's';
		break;
	case 1:
		computer = 'j';
		break;
	case 2:
		computer = 'b';
		break;
	}

	//判断玩家什么情况可以赢
	if ((player == 's' && computer == 'j') || (player == 'j' && computer == 'b') || (player == 'b' && computer == 's')) {
		printf("你赢了,电脑出的 %c", computer);
	}
	else {
		printf("你输了,电脑出的 %c", computer);
	}
}
*/
