
#include <iostream>
#include <string>
#include <format>

void template01()
{
	const char* str = "Turing";
	str = "TuringRestArt";

	std::cout << str << std::endl;
}

void template02()
{
	char* str1 = new char[]("Turing");
	char* str2 = new char[]{'T','u','r','i','n','g'};
	char* str3 = new char[]{'T','u','r','i','n','g','\0'};

	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << str3 << std::endl;
}


std::string BuildAssetPath(const std::string& baseDir,
	const std::string& modelName)
{
	std::string path = baseDir;
	if (path.back() != '/') path += '/';  // 自动处理路径分隔符
	path += modelName + ".fbx";           // 安全拼接
	return path;                          // 返回值优化（RVO）生效
}

void template03()
{
	
	std::string modelPath = BuildAssetPath("Assets/Characters", "Turing");
	std::cout << modelPath << std::endl;

	
}

void template04()
{

	std::string log = std::format("Player:{0}\nPosition({1:.1f}, {2:.1f})\nSkill Triggered:{3}",
		"Turing", 123.456f, 89.123f, "Charging Attack");

	std::cout << log << std::endl;


}

int main(int argc, const char* argv[])
{
	//std::cout << "----------------template01----------------" << std::endl;
	//template01();

	//std::cout << std::endl;

	// std::cout << "----------------template02----------------" << std::endl;
	// template02();

	//std::cout << std::endl;

	//std::cout << "----------------template03----------------" << std::endl;
	//template03();

	//std::cout << "----------------template04----------------" << std::endl;
	template04();

	return 0;
}