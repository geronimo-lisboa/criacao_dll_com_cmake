#include <interfaceDll.h>
#include <iostream>

int main(int argc, char** argv)
{
	float v1 = 1.5, v2 = 3.0;
	float v3 = Soma(v1, v2);
	std::cout << v3 << std::endl;
	return 0;
}