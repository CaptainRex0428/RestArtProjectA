
#include <iostream>


#define LOG(X) std::cout << X <<std::endl

// .h

class Character
{
public:
	double mSpeed = 10;

	void Walk(double delta);
	double GetDistance();

private:
	double mDistance = 0;

};

// .cpp

void Character::Walk(double delta)
{
	this->mDistance += delta * this->mSpeed;
}

double Character::GetDistance()
{
	return this->mDistance;
}


void template01()
{
	Character c;
	c.Walk(10);
	std::cout << "Walk distance:" << c.GetDistance() << std::endl;
}

void template02()
{
	Character c;
	c.Walk(10);
	std::cout << "Walk distance(c):" << c.GetDistance() << std::endl;

	Character* d = new Character();
	d->Walk(10);
	std::cout << "Walk distance(d):" << d->GetDistance() << std::endl;

	delete d;

}

void template03()
{
	
	int basic = 100;

	auto f = [=]() mutable
		{
			basic = 200;
			LOG(basic);
		};

	f();
	LOG(basic);
	
	
}


void SetupEnemySpawner() 
{
	int spawnCount = 0;

	auto spawnEnemy = [spawnCount]() mutable 
	{
		spawnCount++; 
		std::cout << "Spawn enemy count:" << spawnCount << std::endl;
	};

	spawnEnemy(); 
	spawnEnemy(); 

	std::cout << "Counter out:" << spawnCount << std::endl;
}


void template04()
{	
	SetupEnemySpawner();
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