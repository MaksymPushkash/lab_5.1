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
            // ������� ������� g � ����������� ����������
            double result = g(2, 3);
            Assert::AreEqual(19.0, result, 0.001);
        }

        TEST_METHOD(TestGFunctionWithNegativeValues)
        {
            // ������� ������� g � ����������� ����������
            double result = g(-2, -3);
            Assert::AreEqual(19.0, result, 0.001);
        }

        TEST_METHOD(TestGFunctionWithZeros)
        {
            // ������� ������� g � ������
            double result = g(0, 0);
            Assert::AreEqual(0.0, result, 0.001);
        }

        TEST_METHOD(TestMainFunctionLogic)
        {
            // ������� ������� ����� �������� ��� ������ �������
            double s = 2, t = 3;
            double result = (g(1, s) + (1 + g(t, 1) * g(t, 1)) * (1 + g(t, 1) * g(t, 1))) / (1 + g(s + t, 1) * g(s + t, 1) * g(s + t, 1));

            // ������� ���������� ������ ���� ������ ���������, ����� ��������������� ��������� ����������
            double expected_result = (g(1, 2) + (1 + g(3, 1) * g(3, 1)) * (1 + g(3, 1) * g(3, 1))) / (1 + g(5, 1) * g(5, 1) * g(5, 1));

            // ����������, �� ��������� �������� � ���������� ������ ���������
            Assert::AreEqual(expected_result, result, 0.001);
        }
    };
}
