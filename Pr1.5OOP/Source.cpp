#include "Pair.h"
#include "Rational.h"
#include <iostream>

using namespace std;

int main()
{
	Pair h1, h2;
	Pair r;
	Rational p;


	p.read(h1, h2);
	r.display(h1, h2);
	p.display(h1, h2);
	return 0;
}
