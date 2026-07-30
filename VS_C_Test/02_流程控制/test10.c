#define _CRT_SECURE_NO_WARNINGS

//整数反转：将一个整数x,进行反转。
//举例:123 反转之后变成321。

int main10() {
	int num = 0;
	scanf("%d", &num);

	//存储反转以后的数字
	int new_num = 0;

	//只要num不等于零就一直循环，注意括号里写的是循环执行的条件，要反着写。
	while (num != 0) {
		//存储获取到的个位数字
		int ge = 0;

		//获取num的个位数字，然后去掉获取的那个数字
		ge = num % 10;
		num = num / 10;

		//把获取到的个位数字，从左到右合起来
		new_num = new_num * 10 + ge;

	}

	printf("%d", new_num);

	return 0;
}