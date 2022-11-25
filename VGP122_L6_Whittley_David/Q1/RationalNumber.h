#pragma once

#include <iostream>

using namespace std;

class RationalNumber
{
public:
	// Constructor & Destructor
	RationalNumber(int numerator = 0, int denominator = 1);
	RationalNumber(const Rational& aRational); // Copy Constructor
	~RationalNumber();
	
	// Setters
	void setNum(int a);
	void setDen(int b);

	// Getters
	int getNum() const;
	int getDen() const;

	// Math
	void Add(RationalNumber a1);
	void Subtract(RationalNumber s1);
	void Multiply(RationalNumber m1);
	void Divide(RationalNumber d1);
	void GCD(RationalNumber g1);			// Greatest Common Divider
	int Simplify(int a, int b);
	
	
	// Display
	void DisplayFract(RationalNumber f1) const;
	void DisplayDouble(RationalNumber f2) const;

private:

	int numerator;
	int denominator;
};