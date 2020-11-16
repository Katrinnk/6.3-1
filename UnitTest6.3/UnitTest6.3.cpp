#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			const int n = 5;
			int k = 1;
			int a[n] = { 1,2,3,4,5 };
			z = Nep(a, n);
			Assert::AreEqual(z, 4);
		}
	};
}
