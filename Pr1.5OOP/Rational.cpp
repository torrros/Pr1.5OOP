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

void Rational::display(Pair & m1, Pair & m2)
{
	cout << " Add " << endl;
	cout << " " << pair.tostring(add(m1, m2)) << " | " << pair.tostring(Add(m1, m2))<<endl;
	cout<<" Division "<<endl;
	cout << " " << pair.tostring(div(m1, m2)) << " | " << pair.tostring(Div(m1, m2)) << endl;
	cout << " Subtraction " << endl;
	cout << " " << pair.tostring(sub(m1, m2)) << " | " << pair.tostring(Sub(m1, m2));
}

int Rational::add(Pair& m1, Pair& m2)
{
	return m1.geta() * m2.getb() + m1.getb() * m2.geta();
}

int Rational::Add(Pair& r1, Pair& r2)
{
	return r1.getb()*r2.getb();
}

int Rational::div(Pair& m1, Pair& m2)
{
	return m1.geta() * m2.getb();
}

int Rational::Div(Pair&m1,Pair&m2)
{
	return m1.getb() * m2.geta();
}

int Rational::sub(Pair& m1, Pair& m2)
{
	return m1.geta() * m2.getb() - m1.getb() * m2.geta();
}

int Rational::Sub(Pair& m1, Pair& m2)
{
	return  m1.getb()* m2.getb();
}