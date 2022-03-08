#pragma once

#include "ComplexNumber.h"

namespace lab {
    class Menu {
    private:
        int choice;
    public:
        void menuOutput();

        void setChoice(int);

        void functionCall();

        ComplexNumber multiply(ComplexNumber, ComplexNumber);

        ComplexNumber add(ComplexNumber, ComplexNumber);

        float length(ComplexNumber);

        ComplexNumber multiply(float, ComplexNumber);
    };
}
