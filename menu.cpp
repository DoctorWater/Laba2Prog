#include "menu.h"
#include <iostream>
#include "lab.h"
#include "ComplexNumber.h"
class menu
{
private:
	static int choice;
public:
	static void menuOtput() {
		std::cout << "Выберите функцию программы: " << std::endl;
		std::cout << "1) Умножение комплексного числа на вещественное число" << std::endl;
		std::cout << "2) Сложение двух комплексных чисел" << std::endl;
		std::cout << "3) Умножение двух комплексных чисел" << std::endl;
		std::cout << "4) Нахождение длины комплексного числа" << std::endl;
	}
	void setChoice(int value) {
		choice = value;
	}
	void functionCall() {
		switch (choice)
		{
		case 1:
			ComplexNumber c;
			float a;
			std::cout << "Пожалуйста, введите части вещественного числа через ENTER" << std::endl;
			std::cin >> a;
			c.setReal(a);
			std::cin >> a;
			c.setImaginary(a);
			break;
		default:
			break;
		}
	}
};
