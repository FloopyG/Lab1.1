#include "pch.h"
#include "CppUnitTest.h"
#include "../Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1, y = 1;
			Point z;
			bool t = z.Init(x, y);
			Assert::AreEqual(t, true);
		}
	};
}
