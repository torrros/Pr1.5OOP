
#include "Pair.h"
#include <iostream>
#include <string>
#include <sstream>


void Pair::init(int a, int b)
{
	seta(a);
	setb(b);
}

void Pair::display(Pair& m1, Pair& m2)
{
	cout << " Subtraction" << endl;
	cout << " " << (tostring(sub(m1, m1))) << "|" << (tostring(sub(m2, m2))) << endl;
	cout << " Multiply" << endl;
	cout << " " <<(tostring( multiply(m1, m1))) << "|" <<(tostring(multiply(m2, m2))) << endl;
	cout << " Equal" << endl;
	cout << " " << (tostring(equal(m1, m2))) << "|" << (tostring(equal(m2, m1)))  << " (0-not equal|1-equal) " << endl;

}

void Pair::read(Pair& m1, Pair& m2)
{

	cout << " a = "; cin >> m1.a;
	cout << " b = "; cin >> m2.a;
	init(m1.a, m2.a);

	cout << " c = "; cin >> m1.b;
	cout << " d = "; cin >> m2.b;
	init(m1.b, m2.b);

}

int Pair::multiply(Pair& m1, Pair m2)
{
	return m1.geta() * m1.getb();
	return m2.geta()* m2.getb();
}



bool Pair::equal(Pair& m1, Pair& m2)
{

	if (m1.a == m2.a && m1.b == m2.b)
		return true;
	else
		return false;
}

string Pair::tostring(int value)const
{
	stringstream ss;
	ss << value;
	string str = ss.str();
	return str;
}

int Pair::sub(Pair& m1,Pair m2)
{
	return m1.geta() - m1.getb(),m2.geta() - m2.getb();
}



