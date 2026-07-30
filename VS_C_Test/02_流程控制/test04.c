#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//模拟游戏打boss时，攻击掉⾎的场景

int main04() {
	//boss的血量
	int boss_hp = 1300;
	
	//攻击造成的伤害
	int attack = 125;

	//while只要boss不死就一直循环攻击
	while (boss_hp > 0) {
		//防止最后一次攻击将boss的血量变成负数
		// boss的血量大于攻击伤害（125）就正常攻击
		// boss的血量小于攻击伤害（125）就把此次攻击量改成boss的剩余血量
		int real_attack = (boss_hp > attack) ? attack : boss_hp;
		
		//攻击boss使其掉血
		boss_hp = boss_hp - real_attack;
		printf("你击中了boss，造成了%d点伤害，boss还剩%d点伤害\n", real_attack, boss_hp);
	}
	printf("----------------------------------------------------\n");
	printf("恭喜你击败了boss，获得极品装备！！！\n");

	return 0;
}