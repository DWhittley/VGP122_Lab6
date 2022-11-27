#include <iostream>
#include<cmath>

#include "Rational.h"

using namespace std;

/*b. Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies
fractions that are not in reduced form and avoids negative denominators.*/
template<typename T>
Rational<T>::Rational(T numerator, T denominator)
{
	if (denominator <= 0) {
		cout << "Can't devide with zero restart program";
		exit(-1);
	}
	else {
		T temp = 1, x, y, r;

		if (numerator > denominator) {
			x = numerator;
			y = denominator;
		} else {
			x = denominator;
			y = numerator;
		}

		while (y != 0)
		{
			r = x % y;
			x = y;
			y = r;
		}

		this->numerator = numerator / x;
		this->denominator = denominator / x;
	}
}
template<typename T>
Rational<T>::~Rational()
{
}
template<typename T>
void Rational<T>::setNum(T a)
{
	numerator = a;
}
template<typename T>
void Rational<T>::setDen(T b)
{
	denominator = b;
}
template<typename T>
T Rational<T>::getNum() const
{
	return numerator;
}
template<typename T>
T Rational<T>::getDen() const
{
	return denominator;
}
template<typename T>
void Rational<T>::GCD(Rational g1)
{

	T temp = 1, a = g1.getNum(), b = g1.getDen();

	if (a < 0) {
		a *= 1;
	}
	else if (b < 0) {
		b *= -1;
	}

	while (b > 0)
	{
		temp = b;
		b = a % temp;
		a = temp;
	}

	cout << "The fraction (" << g1.getNum() << " / " << g1.getDen() << ") can be simplified to (" << g1.getNum() / temp << " / "
		<< g1.getDen() / temp << ") using the GCD " << temp << "." << endl;
}

template<typename T>
T Rational<T>::Simplify(T a, T b)
{
	Rational sim;

	T temp = 1, x, y, r;

	if (a > b)
	{
		x = a;
		y = b;
	}

	else
	{
		x = b;
		y = a;

	}

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	return x;

}

template<typename T>
void Rational<T>::operator+(Rational<T> a1)
{

	T cd = getDen() * a1.getDen();
	T Num1 = getNum() * a1.getDen();
	T Num2 = a1.getNum() * getDen();


	cout << "\nSUM: (" << getNum() << " / " << getDen() << ") + (" << a1.getNum() << " / " << a1.getDen() << ") = ("
		<< (Num1 + Num2) / Simplify(abs(Num1 + Num2), abs(cd)) << " / " << cd / Simplify(abs(Num1 + Num2), abs(cd)) << ")" << endl;

}
template<typename T>
void Rational<T>::operator-(Rational<T> s1)
{

	T cds = getDen() * s1.getDen();
	T Num3 = getNum() * s1.getDen();
	T Num4 = s1.getNum() * getDen();

	cout << "SUBTRACTION: (" << getNum() << " / " << getDen() << ") - (" << s1.getNum() << " / " << s1.getDen() << ") = ("
		<< (Num3 - Num4) / Simplify(abs(Num3 - Num4), abs(cds)) << " / " << cds / Simplify(abs(Num3 - Num4), abs(cds)) << ")" << endl;
}
template<typename T>
void Rational<T>::operator*(Rational<T> m1)
{

	T cdr = getDen() * m1.getDen();
	T Num5 = getNum() * m1.getNum();

	cout << "MULTIPLICATION: (" << getNum() << " / " << getDen() << ") * (" << m1.getNum() << " / " << m1.getDen() << ") = ("
		<< (Num5) / Simplify(abs(Num5), abs(cdr)) << " / " << cdr / Simplify(abs(Num5), abs(cdr)) << ")" << endl;
}
template<typename T>
void Rational<T>::operator/(Rational<T> d1)
{
	T cdd = getDen() * d1.getNum();
	T Num6 = getNum() * d1.getDen();

	cout << "DIVISION: (" << getNum() << " / " << getDen() << ") / (" << d1.getNum() << " / " << d1.getDen() << ") = ("
		<< (Num6) / Simplify(abs(Num6), abs(cdd)) << " / " << cdd / Simplify(abs(Num6), abs(cdd)) << ")" << endl;
}
template<typename T>
void Rational<T>::operator=(Rational<T> e1) {
	this->numerator = e1.numerator;
	this->denominator = e1.denominator;
	DisplayFract(*this);
}
template<typename T>
bool Rational<T>::operator==(Rational<T> o1) {
	if (this->numerator == o1.numerator && this->denominator == o1.denominator) {
		return true;
	} else {
		return false;
	}
}
template<typename T>
bool Rational<T>::operator!=(Rational<T> o1){
	if (!(this->numerator == o1.numerator && this->denominator == o1.denominator)) {
		return true;
	} else {
		return false;
	}
}
template<typename T>
bool Rational<T>::operator>(Rational<T> o1){
	if ((this->numerator * o1.denominator) > (o1.numerator * this->denominator)) {
		return true;
	}
	else {
		return false;
	}
}
template<typename T>
bool Rational<T>::operator<(Rational<T> o1){
	if ((this->numerator * o1.denominator) < (o1.numerator * this->denominator)) {
		return true;
	}
	else {
		return false;
	}
}
template<typename T>
bool Rational<T>::operator>=(Rational<T> o1){
	if (((this->numerator * o1.denominator) > (o1.numerator * this->denominator)) || (this->numerator == o1.numerator && this->denominator == o1.denominator)) {
		return true;
	}
	else {
		return false;
	}

}
template<typename T>
bool Rational<T>::operator<=(Rational<T> o1){
	if (((this->numerator * o1.denominator) < (o1.numerator * this->denominator)) || (this->numerator == o1.numerator && this->denominator == o1.denominator)) {
		return true;
	}
	else {
		return false;
	}
}
template<typename T>
void Rational<T>::DisplayFract(Rational f1) const
{
	cout << "DISPLAY FRACTION: " << f1.getNum() << " / " << f1.getDen() << endl;
}

template class Rational<int>;
template class Rational<double>;
template class Rational<float>;
