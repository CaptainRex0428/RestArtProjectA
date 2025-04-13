// 制作一个"吐币机器"
#include <iostream>

// 函数定义 (兑换汇率的说明)
int GetCoins(int cash)		// 输入两个int参数
{ 
	
	int coins = cash * 5;		// 处理过程,一个单位的现金可以换5个游戏币

	return coins;				// 返回int结果
}

void changeNumber(int * originNumber)
{
	*originNumber = 100;
}

int main(int argc, const char * argv[])
{
	// 使用机器
	int coins = GetCoins(3);	// 放入3个单位的货币
	// std::cout << "You got " << coins << " coins." << std::endl;   // 输出15


	int num = 10;
	std::cout << "Origin Number:" << num << std::endl;
	
	changeNumber(&num);
	std::cout << "Changed Number:" << num << std::endl;

	return 0;
}