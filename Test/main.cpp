#include <cstdio>
#include <vector>
#include <iostream>

int main()
{
    printf("hello from Test!\n");

	std::vector<int> myVec;
	std::cout << "Capacity : " << myVec.capacity() << std::endl;
	std::cout << "Size : " << myVec.size() << std::endl;
	myVec.reserve(1);
	std::cout << "Capacity : " << myVec.capacity() << std::endl;
	std::cout << "Size : " << myVec.size() << std::endl;
	std::cout << "Max Size : " << myVec.max_size() << std::endl;
	myVec[2500] = 1;
	myVec[2400] = 2;
	myVec[1] = 3;
	std::cout << "Capacity : " << myVec.capacity() << std::endl;
	std::cout << "Size : " << myVec.size() << std::endl;
	std::cout << "Max Size : " << myVec.max_size() << std::endl;

	std::cout << "Value 2500 " << myVec[2500] << std::endl;
	std::cout << "Value 2400 " << myVec[2400] << std::endl;
	std::cout << "Value 1 " << myVec[1] << std::endl;

	myVec[-47] = 54;
	std::cout << "Capacity : " << myVec.capacity() << std::endl;
	std::cout << "Size : " << myVec.size() << std::endl;
	std::cout << "Max Size : " << myVec.max_size() << std::endl;
	std::cout << "Value -47 " << myVec[-47] << std::endl;

	for (int i = 0; i <= 25000000; i++)
	{
		std::cout << myVec[i];
	}

	size_t b;
	int a = -47;
	b = (size_t)a;

	std::cout << "Value  " << b << std::endl;

	b = a;

	std::cout << "Value  " << a << std::endl;

	std::cin.ignore();

    return 0;
}