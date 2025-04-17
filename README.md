#include <iostream>

int main()
{
    int x;  //ширина
    int y; //длина
    std::cout << "Введите ширину прямоугольника";
    std::cin >> x;

    std::cout << "Введите длинну прямоугольника";
    std::cin >> y;

    int P = 2*(x+y); // формула для расчета периметра
    int S = x*y; // формула для расчета площади

    std::cout << "Площадь прямоугольника: " << P << std::endl;

    std::cout << "Периметр прямоугольника: " << S << std::endl;

    return 0;
}
