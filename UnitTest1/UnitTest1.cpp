#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\Pr1.5OOP\Pr1.5OOP\Pair.h"
#include "C:\Users\vladt\source\repos\Pr1.5OOP\Pr1.5OOP\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair r1;
			r1.init(14, 7);
			Pair r2;
			r2.init(7, 14);
				Assert::AreEqual(r1, r2);
				

		}
	};
}
