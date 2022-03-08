#pragma once
#include <string>
class ComplexNumber
{
	
private:
	float real, imaginary;
public:
	ComplexNumber() {}
	ComplexNumber(float, float) {}
	void setReal(float) {}
	void setImaginary(float) {}
	float getReal() {}
	float getImaginary() {}
	std::string toString() {}
};

