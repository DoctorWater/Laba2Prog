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
		std::cout << "�������� ������� ���������: " << std::endl;
		std::cout << "1) ��������� ������������ ����� �� ������������ �����" << std::endl;
		std::cout << "2) �������� ���� ����������� �����" << std::endl;
		std::cout << "3) ��������� ���� ����������� �����" << std::endl;
		std::cout << "4) ���������� ����� ������������ �����" << std::endl;
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
			std::cout << "����������, ������� ����� ������������� ����� ����� ENTER" << std::endl;
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
