#include <iostream>
#include "constants.h"

// Функция heightT(ввод высоты башни)
double heightT()
{
    std::cout << "Введите высоту башни в метрах: ";
    double height{};
    std::cin >> height;
    return height;
}

// Функция calculation(вычисление расстояния падения)
double calculation(double height, int t)
{
    double falls {(g * (t * t)) / two};
    double span {height - falls};
    return span;
}

// Функция printH(вывод высоты и времени)
void printH(double height, int seconds)
{
	if (height > 0.0)
		std::cout << "Через " << seconds << " секунд мяч пролетит: " << height << " метров\n";
	else
		std::cout << "Через " << seconds << " секунд, мяч упадет на землю.\n";
}

// Функция calculateAndPrintHeight
void calculateH(double towerHeight, int seconds)
{
	double height { calculation(towerHeight, seconds) };
	printH(height, seconds);
}

// Основаня фукция main c towerHeight перечислением высоты и секунд,
int main()
{
	double towerHeight { heightT() };

	calculateH(towerHeight, 0);
	calculateH(towerHeight, 1);
	calculateH(towerHeight, 2);
	calculateH(towerHeight, 3);
	calculateH(towerHeight, 4);
	calculateH(towerHeight, 5);

	return 0;
}
