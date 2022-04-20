#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/3/lab_3.1/lab_3.1/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1(1 ,2, 3);
			Assert::AreEqual(2, t1.getSecond());
		}
	};
}
