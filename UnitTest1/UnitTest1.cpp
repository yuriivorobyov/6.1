#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\Desktop\Політех\АТП\6 тема\6.1\6.1\6.1\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int r[25]{ 51 , 32,  15,  72,  72,  46,  12,  73,  14,  50,  50,  19,  44,  18,  54,  69,  65,  40,  66,  42,  22,  10,  13,  27,  34 };
			c = Sum(r, 25);
		Assert::AreEqual(c, 336);
		}
	};
}
