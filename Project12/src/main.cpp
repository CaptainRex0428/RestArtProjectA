
#include <iostream>
#include <map>
#include <string>
#include <functional>

void template01()
{
	// 创建示例：<键类型, 值类型>
	std::map<int, std::string> WeaponMap; // 键：武器ID，值：武器名称

	WeaponMap[1] = "Rifle";
	WeaponMap[2] = "Sniper";
	WeaponMap[3] = "Pistol";

	// 范围for循环（C++11）
	for (const auto& Pair : WeaponMap)
	{
		std::cout << "First(ID):" << Pair.first << " Second(Name)" << Pair.second << std::endl;
	}
}

void template02()
{
	// 创建示例：<键类型, 值类型>
	std::map<int, std::string> WeaponMap; // 键：武器ID，值：武器名称

	WeaponMap[1] = "Rifle";
	WeaponMap[2] = "Sniper";
	WeaponMap[3] = "Pistol";

	// 范围for循环（C++11）
	for (auto it = WeaponMap.begin(); it != WeaponMap.end(); it++)
	{
		std::cout << "First(ID):" << it->first << " Second(Name)" << it->second << std::endl;
	}
}

void template03()
{
	std::map<std::string, int> myMap;

	myMap.emplace("A", 15);
	myMap.emplace("D", 15);
	myMap.emplace("G", 15);
	myMap.emplace("L", 15);
	myMap.emplace("K", 15);
	myMap.emplace("C", 15);

	for (auto it = myMap.begin(); it != myMap.end(); it++)
	{
		std::cout << "First(ID):" << it->first << " Second(Name)" << it->second << std::endl;
	}

}

bool myCompare(const std::string& a, const std::string& b) 
{
	return a > b;
}


void template04()
{
	std::map<std::string, int, std::function<bool(const std::string&, const std::string&)>> myMap(myCompare);

	myMap.emplace("A",15);
	myMap.emplace("D",15);
	myMap.emplace("G",15);
	myMap.emplace("L",15);
	myMap.emplace("K",15);
	myMap.emplace("C",15);

	for (auto it = myMap.begin(); it != myMap.end(); it++)
	{
		std::cout << "First(ID):" << it->first << " Second(Name)" << it->second << std::endl;
	}
}

int main(int argc, const char* argv[])
{
	std::cout << "----------------template01----------------" << std::endl;
	template01();

	std::cout << std::endl;

	std::cout << "----------------template02----------------" << std::endl;
	template02();

	std::cout << std::endl;

	std::cout << "----------------template03----------------" << std::endl;
	template03();

	std::cout << std::endl;

	std::cout << "----------------template04----------------" << std::endl;
	template04();

	return 0;
}