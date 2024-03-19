#include <iostream>
#include <vector>
#include <algorithm>



class Ochki
{
public:
	//����� �����
	std::string name;
	int score;

	//����� � �������
	Ochki(std::string a, int b) : name(a), score(b)
	{}
};

	bool Vse(const Ochki& a, const Ochki& b)
	{
		return a.score > b.score;
	}


int main()
{
	//����������� ������ �� ������
	setlocale(LC_ALL, "Russian");

	//���������� �� ���������� ������� 
	int N;
	std::cout << "������� �������?" << "\n";
	std::cin >> N;

	//���������� ������
	std::vector <Ochki> players;

	for (int i = 0; i < N; ++i)
	{
		//����������� �������� � ���������� ���
		std::string name;
		int score;
		std::cout << "���:";
		std::cin >> name;

		//����������� �������� � ���������� ����
		std::cout << "������� �����?:";
		std::cin >> score;

		//�������� ������� � ������
		Ochki ochki(name, score);
		players.push_back(ochki);
	}

	//����������
	std::sort(players.begin(), players.end(), Vse);

	std::cout << "�����:" << "\n";

	for (const Ochki& ochki : players)
	{
		std::cout << "���: " << ochki.name << "\n";
		std::cout << "����:" << ochki.score << "\n";
	}
}