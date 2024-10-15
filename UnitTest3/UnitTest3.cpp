#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 4.0;
			double s = 9.0;
			double expected = (f(t, s, 2) + f(1, s + t, t - s)) + (pow(f(1, 1, pow(t, 2) + pow(s, 2)), 2));
			double actual = 3.36744;
			Assert::AreEqual(expected, actual,1e-5);
		}
	};
}
