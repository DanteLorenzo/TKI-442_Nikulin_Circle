#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <stdexcept>

namespace circle {
    /**
    * @brief Класс Круг.
    *
    * Этот класс предоставляет методы для работы с кругом, включая вычисление площади и длины окружности.
    */
    class Circle {
    private:
        /**
        * @brief Радиус круга.
        */
        double radius;

    public:
        /**
        * @brief Инициализирует новый объект класса Circle.
        *
        * @param r Радиус круга. Должен быть положительным числом.
        * @throws std::invalid_argument Если радиус не положителен.
        */
        Circle(double r);

        /**
        * @brief Вернуть радиус круга.
        *
        * @return Радиус круга.
        */
        double getRadius() const;

        /**
        * @brief Вернуть диаметр круга.
        *
        * @return Диаметр круга.
        */
        double getDiameter() const;

        /**
        * @brief Рассчитать длину окружности.
        *
        * @return Длина окружности.
        */
        double getLength() const;

        /**
        * @brief Рассчитать площадь круга.
        *
        * @return Площадь круга.
        */
        double getArea() const;

        /**
        * @brief Установить радиус круга.
        *
        * @param r Новый радиус круга. Должен быть положительным числом.
        * @throws std::invalid_argument Если радиус не положителен.
        */
        void setRadius(double r);

        /**
        * @brief Перегрузка оператора вывода.
        *
        * Выводит информацию о круге в поток.
        *
        * @param os Поток вывода.
        * @param circle Круг, информацию о котором нужно вывести.
        * @return Поток вывода.
        */
        friend std::ostream& operator<<(std::ostream& os, const Circle& circle);

        /**
        * @brief Перегрузка оператора ввода.
        *
        * Читает радиус круга из потока ввода.
        *
        * @param is Поток ввода.
        * @param circle Круг, в который будет записан введенный радиус.
        * @return Поток ввода.
        * @throws std::invalid_argument Если введенный радиус не положителен.
        */
        friend std::istream& operator>>(std::istream& is, Circle& circle);
    };
}

#endif // CIRCLE_H