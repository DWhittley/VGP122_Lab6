#pragma once

#include<iostream>
using namespace std;

template<typename T>
class Rational
{

public:

	// Constructor & Destructor
	Rational(T numerator = 0, T denominator = 1);
	Rational(const T aRational); // Copy Constructor
	~Rational();

	// Setters
	void setNum(T a);
	void setDen(T b);

	// Getters
	T getNum() const;
	T getDen() const;

	// Math
	void operator+(Rational a1);
	void operator-(Rational s1);
	void operator*(Rational m1);
	void operator/(Rational d1);
	void operator=(Rational e1);
	bool operator==(Rational o1);
	bool operator!=(Rational o1);
	bool operator>(Rational o1);
	bool operator<(Rational o1);
	bool operator>=(Rational o1);
	bool operator<=(Rational o1);
	void GCD(T g1);			// Greatest Common Divider
	T Simplify(T a, T b);

	// Display
	void DisplayFract(T f1) const;
	void DisplayDouble(T f2) const;


private:

	T numerator;
	T denominator;

};