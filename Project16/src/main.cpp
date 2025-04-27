#include <iostream>


class Actor
{
public:
	Actor();
	Actor(const char* name);

	~Actor();

private:
	const char* mName;
};

Actor::Actor()
	:mName("Default name")
{}

Actor::Actor(const char* name)
	:mName(name)
{
}

Actor::~Actor()
{
	std::cout << mName << " destructed." << std::endl;
}

int main(int argc, char* argv[])
{
	Actor actor1;
	Actor actor2("Actor 2");
	Actor* actor3 = new Actor("Actor 3");
	Actor actor4();

	delete actor3;
	
	return 0;
}