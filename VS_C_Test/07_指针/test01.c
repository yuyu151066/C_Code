#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a = 0;
	//printf("%p\n", &a);

	//ap为（地址）指针变量
	//int* ap = &a;
	//printf("%p\n", ap);

	//如果不给局部变量指针变量初始化，程序会给他一个垃圾值，这样不安全
	//而全局变量指针，不给他初始化，他会默认赋值为NULL
	//可以通过把一个指针变量赋值为NULL，来给它初始化为0，意思是此指针变量不指向任何位置
	/*int* ap = NULL;
	printf("%pn", ap);

	int* af = NULL;
	printf("%p\n", af);*/

	char ch = 'w';
	char* ph = &ch;
	printf("%p\n", ch);
	printf("%c\n", *ph);













	return 0;
}