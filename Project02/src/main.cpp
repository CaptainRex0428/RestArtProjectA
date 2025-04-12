#include <iostream>

int main(int argc, const char* argv[])
{

	int i = 1; // 4Byte 2**31
	unsigned int ui = 1; // 4Byte 2*32

	short s = 1; // 2Byte 2**15
	unsigned short us = 1; // 2Byte 2**16

	long l = 1; // 4Byte 2**31
	unsigned long ul = 1; // 4Byte 2**32

	char c = 75; //K 1Byte 

	float f = 1.0f;
	double d = 1.0;
	long double ld = 1.0;

	bool b = true; // 1Byte wasted!!!

	return 0;

	// 均为真
	bool a = true;
	bool b = 1;
	bool c = 2;
	bool d = -1;

	//均为假
	bool e = false;
	bool f = 0;
	bool g = NULL;
	void* ptr = nullptr;
	bool h = ptr;
}