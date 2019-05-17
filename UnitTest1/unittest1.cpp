#include "stdafx.h"
#include "CppUnitTest.h"
#include "plane.h"
#include "train.h"
#include "Ship.h"
#include "Transport.h"
#include "Container.h"
#include "Container_constr.cpp"
#include "ContainerIn.cpp"
#include "ContainerOut.cpp"
#include "TransportIN.cpp"
#include "TrainIN.cpp"
#include "PlaneIN.cpp"
#include "ShipIN.cpp"
#include "transportOUT.cpp"
#include "PlaneOUT.cpp"
#include "TrainOUT.cpp"
#include "ShipOUT.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest2
{
	TEST_CLASS(TestOut)
	{
	public:
		TEST_METHOD(TransportOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\trsp.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			Transport* test = In(ifst);
			Out(*test, ofst);
			ofst.close();
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}
			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(PlaneOut_test)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\pln.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			Transport* test = In(ifst);
			Outplane((plane*)test->obj,ofst);
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(TrainOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\trn.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			Transport* test = In(ifst);
			test = In(ifst);
			Outtrain((train*)test->obj, ofst);
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(ShipOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\shp.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			Transport* test = In(ifst);
			test = In(ifst);
			test = In(ifst);
			Outship((ship*)test->obj, ofst);
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(ContainerOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\cont.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			Container test;
			Init(test);
			Incont(test,ifst);
			Outcont(test, ofst);
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(Onlyship)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\onshp.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			Container test;
			Init(test);
			Incont(test, ifst);
			Out_Ship(test, ofst);
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
	};
	TEST_CLASS(Transpfunct)
	{
	public:
		TEST_METHOD(timetest)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			Transport *test = In(ifst);
			double testTime = 0.75;
			Assert::AreEqual(testTime, time(*test));
		}
		TEST_METHOD(compare)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			Transport *test = In(ifst);
			Transport *test2 = In(ifst);
			bool compar = false;
			Assert::AreEqual(compar, Compare(test,test2));
		}
	};
	TEST_CLASS(Containerfunct)
	{
	public:
		TEST_METHOD(sortfunct)
		{
			Container c;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\filein.txt");
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\sort.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\Test2\\UnitTest1\\fileout.txt");
			Init(c);
			Incont(c, ifst);
			Sort(c);
			Outcont(c,ofst);
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}
			Assert::AreEqual(exp_str, test_str);
		}
	};
	TEST_CLASS(FunctIn)
	{
	public:
		TEST_METHOD(transportIN_test)
		{
			int dist_test = 20;
			int cap_test = 30;
			int speed_test = 40;
			int distAB_test = 30;
			float mass_test = 20.0;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			Transport *test = In(ifst);
			Assert::AreEqual(distAB_test, test->distAB);
			Assert::AreEqual(speed_test, test->speed);
			Assert::AreEqual(mass_test, test->mass);
			Assert::AreEqual(to_string(dist_test) + to_string(cap_test), Get_all((plane*)test->obj));

		}
		TEST_METHOD(planein_test)
		{
			int dist_test = 20;
			int cap_test = 30;
			int key;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			ifst >> key;
			plane test;
			Inplane(test,ifst);
			Assert::AreEqual(dist_test, test.dist);
			Assert::AreEqual(cap_test,test.cap);
		}
		TEST_METHOD(trainin_test)
		{
			int quant_test = 10;
			int key;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\trnin.txt");
			ifst >> key;
			train test;
			Intrain(test,ifst);
			Assert::AreEqual(quant_test, test.quant);

		}
		TEST_METHOD(shipin_test)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\shpin.txt");
			enum type { Lainer, Tanker, Tug };
			type typeship_test = Lainer;
			int water_test = 5;
			int key;
			ship test;
			ifst >> key;
			Inship(test,ifst);
			Assert::AreEqual(to_string(typeship_test),to_string(test.typeship));
			Assert::AreEqual(water_test,test.water);
		}
		TEST_METHOD(containerin_test)
		{
			int count_test = 3;
			Container test;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			Init(test);
			Incont(test,ifst);
			Assert::AreEqual(count_test, test.count);
		}

	};
}