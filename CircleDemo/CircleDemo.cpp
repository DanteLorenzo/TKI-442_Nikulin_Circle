#include <iostream>
#include "Circle.h"

int main() {
    try {
        circle::Circle c1(5.0);
        std::cout << "Созданный круг: " << c1 << std::endl;
        std::cout << "Площадь: " << c1.getArea() << std::endl;
        std::cout << "Длина окружности: " << c1.getLength() << std::endl;

        circle::Circle c2(1.0);
        std::cin >> c2;
        std::cout << "Введенный круг: " << c2 << std::endl;
        std::cout << "Площадь: " << c2.getArea() << std::endl;
        std::cout << "Длина окружности: " << c2.getLength() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cerr << "Ошибка: " << ex.what() << std::endl;
    }

    return 0;
}
