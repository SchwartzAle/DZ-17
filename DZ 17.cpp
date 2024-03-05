#include <iostream>

class Vector
{
public:
	Vector()
	{}
	Vector (double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		//����������� ����������:
		std::cout << "������ ������� = " << abs (sqrt((x * x) + (y * y) + (z * z))) << "\n";
	}
private:
	double x = -8;
	double y = 8;
	double z = 4;
};

int main()
{
	//����������� ������ �� ������
	setlocale(LC_ALL, "Russian");

	Vector v;
	v.Show();
}