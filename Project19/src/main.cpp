#include <iostream>


class IInterface
{
public:
	virtual void Interfacefuntion() = 0;
	virtual void VirtualInterfaceFuntion() = 0;
	virtual ~IInterface() = default;
};

class Basic: public IInterface
{
public:
	void OverrideFunction()
	{
		std::cout << "Basic Override Function" << std::endl;
	}

	virtual void VirtualFunction() 
	{
		std::cout << "Basic Virtual Function" << std::endl;
	}

	void Interfacefuntion() override
	{
		std::cout << "Basic Interface Function" << std::endl;
	}

	virtual void VirtualInterfaceFuntion() override
	{
		std::cout << "Basic Virtual Interface Function" << std::endl;
	}
};

class Child : public Basic
{
public:
	void OverrideFunction()
	{
		std::cout << "Child Override Function" << std::endl;
	}

	void VirtualFunction() override
	{
		std::cout << "Child Virtual Function" << std::endl;
	}

	void Interfacefuntion() override
	{
		std::cout << "Child Interface Function" << std::endl;
	}

	void VirtualInterfaceFuntion() override
	{
		std::cout << "Child Virtual Interface Function" << std::endl;
	}
};

int main(int argc, char* argv[])
{
	Basic * childA = new Child();
	Child * childB = new Child();

	std::cout << "ChildA ----------------" << std::endl;
	childA->OverrideFunction();
	childA->VirtualFunction();
	childA->Interfacefuntion();
	childA->VirtualInterfaceFuntion();

	std::cout << "ChildB ----------------" << std::endl;
	childB->OverrideFunction();
	childB->VirtualFunction();
	childB->Interfacefuntion();
	childB->VirtualInterfaceFuntion();

	return 0;
}