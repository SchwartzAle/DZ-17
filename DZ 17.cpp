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
		//Отображение результата:
		std::cout << "модуль вектора = " << abs (sqrt((x * x) + (y * y) + (z * z))) << "\n";
	}
private:
	double x = -8;
	double y = 8;
	double z = 4;
};

int main()
{
	//возможность писать по русски
	setlocale(LC_ALL, "Russian");

	Vector v;
	v.Show();
}