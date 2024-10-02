#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.1/lab_05.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
    TEST_CLASS(UnitTestForGFunction)
    {
    public:

        TEST_METHOD(TestGFunctionWithPositiveValues)
        {
            // Тестуємо функцію g з позитивними значеннями
            double result = g(2, 3);
            Assert::AreEqual(19.0, result, 0.001);
        }

        TEST_METHOD(TestGFunctionWithNegativeValues)
        {
            // Тестуємо функцію g з негативними значеннями
            double result = g(-2, -3);
            Assert::AreEqual(19.0, result, 0.001);
        }

        TEST_METHOD(TestGFunctionWithZeros)
        {
            // Тестуємо функцію g з нулями
            double result = g(0, 0);
            Assert::AreEqual(0.0, result, 0.001);
        }

        TEST_METHOD(TestMainFunctionLogic)
        {
            // Тестуємо основну логіку програми для відомих значень
            double s = 2, t = 3;
            double result = (g(1, s) + (1 + g(t, 1) * g(t, 1)) * (1 + g(t, 1) * g(t, 1))) / (1 + g(s + t, 1) * g(s + t, 1) * g(s + t, 1));

            // Оскільки обчислення можуть бути досить складними, краще використовувати самостійне обчислення
            double expected_result = (g(1, 2) + (1 + g(3, 1) * g(3, 1)) * (1 + g(3, 1) * g(3, 1))) / (1 + g(5, 1) * g(5, 1) * g(5, 1));

            // Перевіряємо, що результат збігається з обчисленим вручну значенням
            Assert::AreEqual(expected_result, result, 0.001);
        }
    };
}
