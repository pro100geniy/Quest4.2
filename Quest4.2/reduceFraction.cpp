#include "functions.h";

void  reduceFraction(int FracNumerator, int FracDenominator, int& numeratorRef, int& denominatorRef) {
	int gcd = 1;
	int smaller = (FracNumerator < FracDenominator) ? FracNumerator : FracDenominator;

	for (int i = 2; i <= smaller; i++) {
		if (FracNumerator % i == 0 && FracDenominator % i == 0) {
			gcd = i;
		}
	}

	numeratorRef /= gcd;
	denominatorRef /= gcd;


}