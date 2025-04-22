#include <iostream>
#include <map>

typedef void (*SkillFunc)();

void fireball() { std::cout << "Fire ball >>>" << std::endl; }
void heal() { std::cout << "Recover life <<<" << std::endl; }
void shield() { std::cout << "Generate shield <<>>" << std::endl; }

void castSkill(int key, std::map<int, SkillFunc> skillMap)
{
	if (skillMap.find(key) != skillMap.end())
	{
		skillMap[key](); // 调用对应的技能函数
	}
}


int main(int argc, const char* argv[])
{

	std::map<int, SkillFunc> skillMap;
	
	skillMap[1] = &fireball;
	skillMap[2] = &heal;
	skillMap[3] = &shield;

	castSkill(1, skillMap);
	castSkill(2, skillMap);
	castSkill(3, skillMap);

	return 0;
}