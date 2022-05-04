#include "Rational.h"
#include "Pair.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Pair Rational::getpair() const
{
	return Pair();
}

void Rational::init(Pair pair)
{
	setpair(pair);
}

void Rational::read(Pair& m1, Pair& m2)
{
	Pair p;
	p.read(m1, m2);
	init(p);

}

void Rational::display(Pair& m1, Pair& m2)
{
	cout << " Division " << endl;
	cout << " " << pair.tostring(div(m2, m1)) << "|" << pair.tostring(div(m1, m2)) << endl;
	cout << " Add " << endl;
	cout << " " << pair.tostring(add(m1, m2)) << "|" << pair.tostring(add(m1, m2)) << endl;
	cout <<" Subtraction " << endl;
	cout << " " << pair.tostring(sub(m1, m2)) << "|" << pair.tostring(sub(m2, m1)) <<"| "<< m2.getb() * m1.getb();
}

int Rational::add(Pair& m1, Pair& m2)
{
	return m1.geta() * m2.getb() + m1.getb() * m2.geta(), m1.getb() * m2.getb();
}

int Rational::div(Pair& m1, Pair& m2)
{
	return  m1.getb()* m2.geta();
}

int Rational::sub(Pair& m1, Pair& m2)
{
	return m1.geta() - m1.getb(), m2.geta() - m2.getb();
}

