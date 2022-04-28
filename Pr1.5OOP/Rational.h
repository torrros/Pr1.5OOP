#pragma once
#include "Pair.h"
using namespace std;
class Rational
{
private :
	
	Pair pair;
	
public:
	Pair getpair() const;
	void setpair(Pair pair) {};

	void init(Pair pair);
	void read(Pair& m1, Pair& m2);
	void display(Pair& m1, Pair& m2);

	int add(Pair& m1,Pair& m2);
	int Add(Pair& r1, Pair& r2);
	int div(Pair& m1,Pair& m2);
	int Div(Pair& m1, Pair& m2);
	int sub(Pair& m1, Pair& m2);
	int Sub(Pair& m1, Pair& m2);
};

