#include <iostream>

int main()
{
	int vet[2][2] = { { 2, 3 }, { 20, 30 } };
	int * ptr = vet[1];
	//int * ptr = &v[0];
	//int * p = v; // mesma coisa
	std::cout << *(ptr + 1) << std::endl;
	system("pause");
	return 0;
}