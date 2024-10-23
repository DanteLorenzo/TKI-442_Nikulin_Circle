// Circle.cpp : Defines the functions for the static library.
//

#include "pch.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include "framework.h"
#include "Circle.h"
#include <cmath>

namespace circle {
    Circle::Circle(double r) : radius(r) {
        if (r <= 0) {
            throw std::invalid_argument("Радиус должен быть положительным числом.");
        }
    }

    void Circle::setRadius(double r) {
        if (r <= 0) {
            throw std::invalid_argument("Радиус должен быть положительным числом.");
        }
        radius = r;
    }

    double Circle::getRadius() const {
        return radius;
    }

    double Circle::getDiameter() const {
        return 2 * radius;
    }

    double Circle::getLength() const {
        return 2 * M_PI * radius;
    }

    double Circle::getArea() const {
        return M_PI * radius * radius;
    }

    std::ostream& operator<<(std::ostream& os, const Circle& circle) {
        os << "Радиус окружности: " << circle.getRadius() << "\n";
        os << "Диаметр окружности: " << circle.getDiameter() << "\n";
        os << "Длина окружности: " << circle.getLength() << "\n";
        os << "Площадь окружности: " << circle.getArea() << "\n";
        return os;
    }

    std::istream& operator>>(std::istream& is, Circle& circle) {
        std::cout << "Введите радиус: ";
        double r;
        is >> r;
        if (r <= 0) {
            throw std::invalid_argument("Радиус должен быть положительным числом.");
        }
        circle.setRadius(r);
        return is;
    }
}