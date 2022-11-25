#include "RationalNumber.h"
#include<cmath>

using namespace std;



RationalNumber::RationalNumber(int numerator, int denominator) : numerator(numerator), denominator(denominator) /* short hand way to init memeber variables*/
{
}

RationalNumber::RationalNumber(const Rational& aRational) {

	setNum(aRational.getNum());
	setDen(aRational.getDen());
}

RationalNumber::~RationalNumber()
{
}

void RationalNumber::RationalNumber(int a)
{
	numerator = a;
}

void RationalNumber::setDen(int b)
{
	denominator = b;
}


int RationalNumber::getNum() const
{
	return numerator;
}

int RationalNumber::getDen() const
{
	return denominator;
}


void RationalNumber::GCD(RationalNumber g1)
{

	int temp = 1, a = g1.getNum(), b = g1.getDen();

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


int RationalNumber::Simplify(int a, int b)
{
	RationalNumber sim;

	int temp = 1, x, y, r;

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


void RationalNumber::Add(RationalNumber a1)
{

	int cd = getDen() * a1.getDen();
	int Num1 = getNum() * a1.getDen();
	int Num2 = a1.getNum() * getDen();


	cout << "\nSUM: (" << getNum() << " / " << getDen() << ") + (" << a1.getNum() << " / " << a1.getDen() << ") = ("
		<< (Num1 + Num2) / Simplify(abs(Num1 + Num2), abs(cd)) << " / " << cd / Simplify(abs(Num1 + Num2), abs(cd)) << ")" << endl;

}

void RationalNumber::Subtract(RationalNumber s1)
{

	int cds = getDen() * s1.getDen();
	int Num3 = getNum() * s1.getDen();
	int Num4 = s1.getNum() * getDen();

	cout << "SUBTRACTION: (" << getNum() << " / " << getDen() << ") - (" << s1.getNum() << " / " << s1.getDen() << ") = ("
		<< (Num3 - Num4) / Simplify(abs(Num3 - Num4), abs(cds)) << " / " << cds / Simplify(abs(Num3 - Num4), abs(cds)) << ")" << endl;
}

void RationalNumber::Multiply(RationalNumber m1)
{

	int cdr = getDen() * m1.getDen();
	int Num5 = getNum() * m1.getNum();

	cout << "MULTIPLICATION: (" << getNum() << " / " << getDen() << ") * (" << m1.getNum() << " / " << m1.getDen() << ") = ("
		<< (Num5) / Simplify(abs(Num5), abs(cdr)) << " / " << cdr / Simplify(abs(Num5), abs(cdr)) << ")" << endl;
}

void RationalNumber::Divide(RationalNumber d1)
{
	int cdd = getDen() * d1.getNum();
	int Num6 = getNum() * d1.getDen();

	cout << "DIVISION: (" << getNum() << " / " << getDen() << ") / (" << d1.getNum() << " / " << d1.getDen() << ") = ("
		<< (Num6) / Simplify(abs(Num6), abs(cdd)) << " / " << cdd / Simplify(abs(Num6), abs(cdd)) << ")" << endl;
}



void RationalNumber::DisplayFract(RationalNumberl f1) const
{
	cout << "DISPLAY FRACTION: " << f1.getNum() << " / " << f1.getDen() << endl;
}

void RationalNumber::DisplayDouble(RationalNumber f2) const // displays float after casting to double
{

	double q1 = (double)f2.getNum();
	double q2 = (double)f2.getDen();

	cout << "DISPLAY DOUBLE: " << f2.getNum() << " / " << f2.getDen() << " = " << q1 / q2 << endl;
}
