#include <iostream>

struct jogador
{
	int x, y, energia;
};

void aplicardano(jogador* j, int dano)
{
	j->energia -= dano;
}
int main()
{
	jogador j1;
	j1.x = 10;
	j1.y = 20;
	j1.energia = 100;
	aplicardano(&j1, 30);
	std::cout << "energia de j1: " << j1.energia << std::endl;

	system("pause");
	return 0;
}