#include <iostream>

class Animal
{
private:
	int food;
	int weight;

public:
	void setAnimal(int _food, int _weight)
	{
		food = _food;
		weight = _weight;
	}
	void increaseFood(int inc)
	{
		food += inc;
		weight += (inc / 3);
	}
	void viewStat()
	{
		std::cout << "이 동물의 food	: " << food << std::endl;
		std::cout << "이 동물의 weight  : " << weight << std::endl;
	}
};

int main()
{
	Animal choco;
	choco.setAnimal(100, 50);
	choco.increaseFood(30);

	choco.viewStat();

	return 0;
}