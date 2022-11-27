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

	int a = 0, b = 1, c = 0, d = 1;

	cout << "Enter the numerator of the first fraction: ";
	cin >> a;

	cout << "Enter the denominator of the first fraction: ";
	cin >> b;

	Rational<int> F1 = Rational<int>(a, b);

	cout << "Enter the numerator of the second fraction: ";
	cin >> c;

	cout << "Enter the denominator of the second fraction: ";
	cin >> d;

	Rational<int> F2 = Rational<int>(c, d);

	//c,
	F1 + F2;
	F1 - F2;
	F1 * F2;
	F1 / F2;
	//F1 = F2;
	//d,
	cout << (F1 == F2);
	cout << (F1 != F2);
	cout << (F1 < F2);
	cout << (F1 > F2);
	cout << (F1 <= F2);
	cout << (F1 >= F2);



	return 0;
}