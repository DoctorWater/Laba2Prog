#pragma once

#include <string>

namespace lab {

    class ComplexNumber {
    private:
        float real, imaginary;
    public:
        ComplexNumber();

        ComplexNumber(float a, float b);

        void setReal(float);

        void setImaginary(float);

        float getReal();

        float getImaginary();

        std::string toString();
    };
}