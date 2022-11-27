#pragma once

#include<iostream>
using namespace std;

class Rational
{

public:

	// Constructor & Destructor
	Rational(int numerator = 0, int denominator = 1);
	Rational(const Rational& aRational); // Copy Constructor
	~Rational();

	// Setters
	void setNum(int a);
	void setDen(int b);

	// Getters
	int getNum() const;
	int getDen() const;

	// Math
	void Add(Rational a1);
	void Subtract(Rational s1);
	void Multiply(Rational m1);
	void Divide(Rational d1);
	void GCD(Rational g1);			// Greatest Common Divider
	int Simplify(int a, int b);

	// Display
	void DisplayFract(Rational f1) const;
	void DisplayDouble(Rational f2) const;


private:

	int numerator;
	int denominator;

};