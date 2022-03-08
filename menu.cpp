
#include <iostream>
#include "menu.h"
#include "ComplexNumber.h"

#include <cmath>

using namespace lab;

void Menu::menuOutput() {
    std::cout << "�������� ������� ���������: " << std::endl;
    std::cout << "1) ��������� ������������ ����� �� ������������ �����" << std::endl;
    std::cout << "2) �������� ���� ����������� �����" << std::endl;
    std::cout << "3) ��������� ���� ����������� �����" << std::endl;
    std::cout << "4) ���������� ����� ������������ �����" << std::endl;
}

void Menu::setChoice(int value) {
    choice = value;
}

void Menu::functionCall() {
    switch (choice) {
        case 1: {
            ComplexNumber c;
            float a;
            std::cout << "����������, ������� ����� ������������ ����� ����� ENTER" << std::endl;
            std::cin >> a;
            c.setReal(a);
            std::cin >> a;
            c.setImaginary(a);
            std::cout << "����������, ������������ �����" << std::endl;
            std::cin >> a;
            c = multiply(a, c);
            std::cout << "���������: " << c.toString() << std::endl;
            break;
        }
        case 2: {
            ComplexNumber c, b;
            float a;
            std::cout << "����������, ������� ����� ������� ������������ ����� ����� ENTER" << std::endl;
            std::cin >> a;
            c.setReal(a);
            std::cin >> a;
            c.setImaginary(a);
            std::cout << "����������, ������� ����� ������� ������������ ����� ����� ENTER" << std::endl;
            std::cin >> a;
            b.setReal(a);
            std::cin >> a;
            b.setImaginary(a);
            c = add(b, c);
            std::cout << "���������: " << c.toString() << std::endl;
            break;
        }
        case 3: {
            ComplexNumber c, b;
            float a;
            std::cout << "����������, ������� ����� ������� ������������ ����� ����� ENTER" << std::endl;
            std::cin >> a;
            c.setReal(a);
            std::cin >> a;
            c.setImaginary(a);
            std::cout << "����������, ������� ����� ������� ������������ ����� ����� ENTER" << std::endl;
            std::cin >> a;
            b.setReal(a);
            std::cin >> a;
            b.setImaginary(a);
            c = multiply(b, c);
            std::cout << "���������: " << c.toString() << std::endl;
            break;
        }
        case 4: {
            ComplexNumber c, b;
            float a;
            std::cout << "����������, ������� ����� ������������ ����� ����� ENTER" << std::endl;
            std::cin >> a;
            c.setReal(a);
            std::cin >> a;
            c.setImaginary(a);
            std::cout << "����� ������������ �����:  " << length(c) << std::endl;
            break;
        }
        default:
            break;
    }
}

ComplexNumber Menu::multiply(ComplexNumber a, ComplexNumber b) {
    float c = a.getReal() * b.getReal() - a.getImaginary() * b.getImaginary(), d =
            a.getReal() * b.getImaginary() + b.getReal() * a.getImaginary();
    ComplexNumber result(c, d);
    return result;
}

ComplexNumber Menu::multiply(float a, ComplexNumber b) {
    ComplexNumber c(b.getReal() * a, b.getImaginary() * a);
    return c;
}

ComplexNumber Menu::add(ComplexNumber a, ComplexNumber b) {
    ComplexNumber c(a.getReal() + b.getReal(), a.getImaginary() + b.getImaginary());
    return c;
}

float Menu::length(ComplexNumber a) {
    return sqrt(a.getReal() * a.getReal() + a.getImaginary() * a.getImaginary());
}

