#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2//Time.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time time = Time{};
			time.setHours(2);
			Assert::IsTrue(time.getHours() == 2);
		}
	};
}
