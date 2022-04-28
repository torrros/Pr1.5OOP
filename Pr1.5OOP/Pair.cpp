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
	cout << " (" << m1.a << "," << m2.a << ") - (" << m1.b << "," << m2.b << ") = ";
	cout << "(" << m1.a << " - " << m1.b << " , " << m2.a << " - " << m2.b << ")" << " = ";
	cout << "(" << tostring(sub(m1.a, m1.b)) << " | " << tostring(Sub(m2)) << ")" << endl;

	cout << " Multiply  " << endl;
	cout << " (" << m1.a << "," << m2.a << ") * (" << m1.b << "," << m2.b << ") = ";
	cout << "(" << m1.a << " * " << m1.b << " , " << m2.a << " * " << m2.b << ")" << " = ";
	cout << "( " << tostring(multiply(m1, m2)) << " | " << tostring(Multiply(m1, m2)) << " )" << endl;
	cout << " Equal " << endl;
	cout <<" "<< m1.a << "," << m1.b << " == " << m2.a << "," << m2.b << " - " << tostring(equal(m1, m2)) << endl;
	
}

void Pair::read(Pair& m1, Pair& m2)
{
	
	cout << " a = "; cin >> m1.a;
	cout << " b = "; cin >> m2.a;
	init(m1.a, m2.a);

	cout << " c = "; cin >> m1.b;
	cout << " d = "; cin >> m2.b;
	init (m1.b, m2.b);

}

int Pair::multiply(Pair& m1, Pair& m2)
{
	return m1.a * m1.b;
}

int Pair::Multiply(Pair& m1, Pair& m2)
{
	return m2.a * m2.b;
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

int Pair ::sub(int a, int b)
{
	return a - b;
}

int Pair ::Sub(Pair& m2)
{
	return m2.a - m2.b;
}