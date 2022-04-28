#pragma once
#include <string>
using namespace std;

class Pair
{
private:
	int a;
	int b;
public:
	int geta()const { return a; }
	int getb()const { return b; }

	void seta(int a) {};
	void setb(int b) {};

	void read(Pair &m1, Pair &m2);
	void display( Pair &m1, Pair &m2);
	void init(int a, int b);
	int sub(int a, int b);
	int Sub( Pair& m2);
	int multiply(Pair& m1, Pair& m2);
	int Multiply(Pair& m1, Pair& m2);
	bool equal(Pair& m1, Pair& m2);

	string tostring(int value) const;
};