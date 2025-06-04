#include <iostream>


class Character
{
public:
	Character(const char* name, int level, float x, float y)
		: m_Level(level)
	{
		m_Name = new char[strlen(name) + 1];
		strcpy(m_Name,name);

		m_Position = new float[2];
		m_Position[0] = x;
		m_Position[1] = y;
	}

	~Character() 
	{
		delete[] m_Name;
		delete[] m_Position;
	}

	Character(const Character& other)
		: m_Level(other.m_Level)
	{
		m_Name = new char[strlen(other.m_Name) + 1];
		strcpy(m_Name, other.m_Name);

		m_Position = new float[2];
		m_Position[0] = other.m_Position[0];
		m_Position[1] = other.m_Position[1];
	}

private:
	char* m_Name;
	int m_Level;
	float* m_Position;
};


int main(int argc, char* argv[])
{
	Character charA("Character",10,255,255);
	Character CharB = charA;
	return 0;
}