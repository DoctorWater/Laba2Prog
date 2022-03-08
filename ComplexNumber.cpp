#include "ComplexNumber.h"

namespace lab {
    ComplexNumber::ComplexNumber() {}
    ComplexNumber::ComplexNumber(float a, float b) {
        this->real = a;
        this->imaginary = b;
    }

    void ComplexNumber::setReal(float value) {
        this->real = value;
    }

    void ComplexNumber::setImaginary(float value) {
        this->imaginary = value;
    }

    float ComplexNumber::getReal() { return this->real; }

    float ComplexNumber::getImaginary() { return this->imaginary; }

    std::string ComplexNumber::toString() {
        std::string s = std::to_string(this->real) + "+(" + std::to_string(this->imaginary) + "i)";
        return s;
    }
};
