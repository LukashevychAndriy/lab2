#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab2\Time.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Time time;
			time.setHours(2);
			Assert::IsTrue(time.getHours() == 2);
		}

		TEST_METHOD(TestMethod2)
		{
			Time time;
			time.setMinutes(20);
			Assert::IsTrue(time.getMinutes() == 20);
		}

		TEST_METHOD(TestMethod3)
		{
			Time time;
			time.setSeconds(30);
			Assert::IsTrue(time.getSeconds() == 30);
		}
	};
}
