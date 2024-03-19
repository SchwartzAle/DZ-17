#include <iostream>
#include <vector>
#include <algorithm>



class Ochki
{
public:
	//вывод имени
	std::string name;
	int score;

	//класс в котором
	Ochki(std::string a, int b) : name(a), score(b)
	{}
};

	bool Vse(const Ochki& a, const Ochki& b)
	{
		return a.score > b.score;
	}


int main()
{
	//возможность писать по русски
	setlocale(LC_ALL, "Russian");

	//переменная по количеству игроков 
	int N;
	std::cout << "Сколько игроков?" << "\n";
	std::cin >> N;

	//динамичный массив
	std::vector <Ochki> players;

	for (int i = 0; i < N; ++i)
	{
		//возможность внисения в переменную Имя
		std::string name;
		int score;
		std::cout << "Имя:";
		std::cin >> name;

		//возможность внисения в переменную Очки
		std::cout << "Сколько очков?:";
		std::cin >> score;

		//добавить элемент в массив
		Ochki ochki(name, score);
		players.push_back(ochki);
	}

	//сортировка
	std::sort(players.begin(), players.end(), Vse);

	std::cout << "Вывод:" << "\n";

	for (const Ochki& ochki : players)
	{
		std::cout << "Имя: " << ochki.name << "\n";
		std::cout << "Очки:" << ochki.score << "\n";
	}
}