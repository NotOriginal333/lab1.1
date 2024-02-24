#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/Number.h"
#include "../lab1.1/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number n;
			n.setFirst(5);
			n.setSecond(2);
			int f = n.getFirst();
			int s = n.getSecond();
			Assert::AreEqual(5, f);
			Assert::AreEqual(2, s);
		}
	};
}
