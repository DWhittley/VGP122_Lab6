/* Create a RationalNumber(fractions) class like the one in Exercise 9.6.
Provide the following capabilities:
a. Create the class as a template class
b. Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies
fractions that are not in reduced form and avoids negative denominators.
c. Overload the addition, subtraction, multiplication and division operators for this class.
d. Overload the relational and equality operators for this class. */

#include <iostream>
#include "Rational.h"

using namespace std;

int main() {

	int a = 0, b = 1;
	Rational F1, F2;

	cout << "Enter the numerator of the first fraction: ";
	cin >> a;

	F1.setNum(a);

	cout << "Enter the denominator of the first fraction: ";
	cin >> b;

	F1.setDen(b);

	cout << "Enter the numerator of the second fraction: ";
	cin >> a;

	F2.setNum(a);

	cout << "Enter the denominator of the second fraction: ";
	cin >> b;

	F2.setDen(b);

	F1 + F2;
	F1 - F2;
	F1 * F2;
	F1 / F2;
	F1.GCD(F1);
	F1.GCD(F2);
	

	cout << "\n--FIRST FRACTION--" << endl;
	F1.DisplayFract(F1);
	F1.DisplayDouble(F1);

	cout << "\n--SECOND FRACTION--" << endl;
	F2.DisplayFract(F2);
	F2.DisplayDouble(F2);

	return 0;
}