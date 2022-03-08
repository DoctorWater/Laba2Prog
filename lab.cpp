#include <iostream>
#include "lab.h"
#include "ComplexNumber.h"
using namespace std;
namespace lab {
	ComplexNumber multiply(ComplexNumber a, ComplexNumber b) {
		float c = a.getReal() * b.getReal() - a.getImaginary() * b.getImaginary(), d=a.getReal() * b.getImaginary()+ b.getReal() * a.getImaginary();
		ComplexNumber result(c, d);
		return result;
	}
	ComplexNumber multiply(float a, ComplexNumber b) {
		ComplexNumber c(b.getReal() * a, b.getImaginary() * a);
		return c;
	}
	ComplexNumber add(ComplexNumber a, ComplexNumber b) {
		ComplexNumber c(a.getReal() + b.getReal(), a.getImaginary() + b.getImaginary());
		return c;
	}
	float length(ComplexNumber a) {
		return sqrt(a.getReal() * a.getReal() + a.getImaginary() * a.getImaginary());
	}
}
