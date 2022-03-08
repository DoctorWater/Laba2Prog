#include "ComplexNumber.h"

class ComplexNumber
{
	
private:
	float real, imaginary;
public:
	ComplexNumber() {

	}
	ComplexNumber(float a, float b) {
		this->real = a;
		this->imaginary = b;
	}
	void setReal(float value) {
		this->real = value;
	}
	void setImaginary(float value) {
		this->imaginary = value;
	}
	float getReal() { return this->real; }
	float getImaginary() { return this->imaginary; }
	std::string toString() {
		std::string s = std::to_string(this->real)+"+("+std::to_string(this->imaginary)+")";
	}
};

