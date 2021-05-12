#include "pch.h"
#include "CppUnitTest.h"
#include "../SzyfrCezara/szyfrCezara.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			szyfrowanie;
			int offset = 2;

			string expected = "cnc";
			string actual = "ala";

			expected == actual;
		}

		TEST_METHOD(TestMethod2)
		{
			szyfrowanie;
			int offset = 1;

			string expected = "bmb";
			string actual = "ala";

			expected == actual;
		}

		TEST_METHOD(TestMethod3)
		{
			szyfrowanie;
			int offset = 25;

			string expected = "zkz";
			string actual = "ala";

			expected == actual;
		}

		TEST_METHOD(TestMethod4)
		{
			szyfrowanie;
			int offset = -2;

			string expected = "yjy";
			string actual = "ala";

			expected == actual;
		}
	};
}
