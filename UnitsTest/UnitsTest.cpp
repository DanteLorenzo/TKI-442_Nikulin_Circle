#include "pch.h"
#include "CppUnitTest.h"
#include "Circle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace UnitTest
{
    TEST_CLASS(CircleTest)
    {
    public:

        // Тестируем расчет площади круга
        TEST_METHOD(TestAreaCalculation)
        {
            circle::Circle c(5.0);
            Assert::AreEqual(M_PI * 25, c.getArea(), 0.001);
        }

        // Тестируем расчет длины окружности
        TEST_METHOD(TestLengthCalculation)
        {
            circle::Circle c(5.0);
            Assert::AreEqual(2 * M_PI * 5, c.getLength(), 0.001);
        }

        // Тестируем установку радиуса
        TEST_METHOD(TestRadiusSetting)
        {
            circle::Circle c(5.0);
            c.setRadius(10.0);
            Assert::AreEqual(10.0, c.getRadius(), 0.001);
        }

        // Тестируем случай с недопустимым радиусом
        TEST_METHOD(TestInvalidRadius)
        {
            Assert::ExpectException<std::invalid_argument>(
                [] { circle::Circle c(-1.0); });
        }

        // Тестируем ввод радиуса
        TEST_METHOD(TestInputRadius) {
            circle::Circle c(1.0);
            std::istringstream input("3.0");
            input >> c;
            Assert::AreEqual(3.0, c.getRadius(), 0.001);
        }
    };
}
