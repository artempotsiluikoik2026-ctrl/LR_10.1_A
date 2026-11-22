
#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 10.1/Students.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101A
{
	TEST_CLASS(UnitTest101A)
	{
	public:

		TEST_METHOD(TestCountThree)
		{
			Student p[4];
			int k[3];

			p[0].surname = "Ivanenko";
			p[0].course = 1;
			p[0].specialty = COMPUTER_SCIENCE;
			p[0].physics = 5;
			p[0].math = 3;
			p[0].informatics = 3;

			p[1].surname = "Petrenko";
			p[1].course = 2;
			p[1].specialty = INFORMATICS;
			p[1].physics = 3;
			p[1].math = 4;
			p[1].informatics = 3;

			p[2].surname = "Sydorenko";
			p[2].course = 3;
			p[2].specialty = MATH_ECONOMICS;
			p[2].physics = 4;
			p[2].math = 3;
			p[2].informatics = 3;

			p[3].surname = "Kovalenko";
			p[3].course = 1;
			p[3].specialty = LABOR_TRAINING;
			p[3].physics = 3;
			p[3].math = 5;
			p[3].informatics = 5;

			CountThree(p, 4, k);

			Assert::AreEqual(2, k[0]); 
			Assert::AreEqual(2, k[1]); 
			Assert::AreEqual(3, k[2]); 
		}

		TEST_METHOD(TestCountThreeNone)
		{
			Student p[2];
			int k[3] = { 99, 99, 99 };

			p[0].surname = "Ivanenko";
			p[0].course = 1;
			p[0].specialty = COMPUTER_SCIENCE;
			p[0].physics = 5;
			p[0].math = 4;
			p[0].informatics = 5;

			p[1].surname = "Petrenko";
			p[1].course = 2;
			p[1].specialty = INFORMATICS;
			p[1].physics = 4;
			p[1].math = 5;
			p[1].informatics = 2;

			CountThree(p, 2, k);

			Assert::AreEqual(0, k[0]);
			Assert::AreEqual(0, k[1]);
			Assert::AreEqual(0, k[2]);
		}
	};
}